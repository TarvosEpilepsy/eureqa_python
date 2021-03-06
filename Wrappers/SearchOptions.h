/*
 *  Wrapper class for eureqa::search_options
 *
 *  Created on: Nov 21, 2010
 *      Author: MF
 */


#ifndef SEARCHOPTIONS_H_
#define SEARCHOPTIONS_H_


#include <eureqa/search_options.h>


class SearchOptions
{
	private:

		eureqa::search_options instance;

	public:

		// Wrapper for eureqa::search_option's constructor with default parameter's value
		SearchOptions() : instance("0=f(0)"){}

		// Wrapper for eureqa::search_option's constructor
		SearchOptions(std::string searchRelationship) : instance(searchRelationship) {}

		// Getter for the eureqa::search_options' instance  (C++ usage)
		const eureqa::search_options& GetInstance() {return instance;}

		// Wrapper for function testing if the options are entered and in range
		bool IsValid() const {return instance.is_valid();}

		// Wrapper for function setting default search options
		void SetDefaultOptions() {instance.set_default_options();}
		void SetDefaultBuildingBlocks() {instance.set_default_building_blocks();}

		// Wrapper for function returning a short text summary of the search options
		std::string Summary() const {return instance.summary();}

		// Getters and setters for eureqa::search_options's public members
		std::vector<std::string> GetBuildingBlocks() const {return instance.building_blocks_;}
		void SetBuildingBlocks(std::vector<std::string> buildingBlocks) {instance.building_blocks_ = buildingBlocks;}
		int GetFitnessMetric() const {return instance.fitness_metric_;}
		void SetFitnessMetric(int fitnessMetric) {instance.fitness_metric_ = fitnessMetric;}
		std::string GetImplicitDerivativeDependencies() const {return instance.implicit_derivative_dependencies_;}
		void SetImplicitDerivativeDependencies(std::string implicitDerivativeDependencies) {instance.implicit_derivative_dependencies_ = implicitDerivativeDependencies;}
		int GetMaxDelaysPerVariable() const {return instance.max_delays_per_variable_;}
		void SetMaxDelaysPerVariable(int maxDelaysPerVariable) {instance.max_delays_per_variable_ = maxDelaysPerVariable;}
		float GetMaxHistoryFraction() const {return instance.max_history_fraction_;}
		void SetMaxHistoryFraction(float maxHistoryFraction) {instance.max_history_fraction_ = maxHistoryFraction;}
		int GetMinImplicitVariablesUsed() const {return instance.min_implicit_variables_used_;}
		void SetMinImplicitVariablesUsed(int minImplicitVariablesUsed) {instance.min_implicit_variables_used_ = minImplicitVariablesUsed;}
		float GetNormalizeFitnessBy() const {return instance.normalize_fitness_by_;}
		void SetNormalizeFitnessBy(float normalizeFitnessBy) {instance.normalize_fitness_by_ = normalizeFitnessBy;}
		float GetPredictorCrossoverProbability() const {return instance.predictor_crossover_probability_;}
		void SetPredictorCrossoverProbability(float predictorCrossoverProbability) {instance.predictor_crossover_probability_ = predictorCrossoverProbability;}
		float GetPredictorMutationProbability() const {return instance.predictor_mutation_probability_;}
		void SetPredictorMutationProbability(float predictorMutationProbability) {instance.predictor_mutation_probability_ = predictorMutationProbability;}
		int GetPredictorPopulationSize() const {return instance.predictor_population_size_;}
		void SetPredictorPopulationSize(int predictorPopulationSize) {instance.predictor_population_size_ = predictorPopulationSize;}
		std::string GetSearchRelationship() const {return instance.search_relationship_;}
		void SetSearchRelationship(std::string searchRelationship) {instance.search_relationship_ = searchRelationship;}
		float GetSolutionCrossoverProbability() const {return instance.solution_crossover_probability_;}
		void SetSolutionCrossoverProbability(float solutionCrossoverProbability) {instance.solution_crossover_probability_ = solutionCrossoverProbability;}
		float GetSolutionMutationProbability() const {return instance.solution_mutation_probability_;}
		void SetSolutionMutationProbability(float solutionMutationProbability) {instance.solution_mutation_probability_ = solutionMutationProbability;}
		int GetSolutionPopulationSize() const {return instance.solution_population_size_;}
		void SetSolutionPopulationSize(int solutionPopulationSize) {instance.solution_population_size_ = solutionPopulationSize;}
		int GetTrainerPopulationSize() const {return instance.trainer_population_size_;}
		void SetTrainerPopulationSize(int trainerPopulationSize) {instance.trainer_population_size_ = trainerPopulationSize;}
};


#endif /* SEARCHOPTIONS_H_ */
