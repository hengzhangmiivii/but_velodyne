/******************************************************************************
 * \file
 *
 * $Id:$
 *
 * Copyright (C) Brno University of Technology
 *
 * This file is part of software developed by Robo@FIT group.
 *
 * Author: Michal Spanel (spanel@fit.vutbr.cz)
 * Supervised by: Michal Spanel (spanel@fit.vutbr.cz)
 * Date: 01/07/2013
 *
 * This file is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this file.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#ifndef BUT_VELODYNE_TOPICS_LIST_H
#define BUT_VELODYNE_TOPICS_LIST_H

#include <string>


namespace but_velodyne
{
    /**
      * laser scan - input topics
      */
	static const std::string INPUT_POINT_CLOUD_TOPIC = "points_in";
	static const std::string OUTPUT_LASER_SCAN_TOPIC = "scan_out";

    /**
      * ground map - input topics
      */
    //static const std::string INPUT_POINT_CLOUD_TOPIC = "points_in";
    static const std::string OUTPUT_GROUND_MAP_TOPIC = "map2d_out";
}

#endif // BUT_VELODYNE_TOPICS_LIST_H
