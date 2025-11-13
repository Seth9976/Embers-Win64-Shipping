// 函数: sub_1418fc5d0
// 地址: 0x1418fc5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HMODULE rcx = data_143efbcc8
int64_t rax

if (rcx != 0)
    rax = sub_140b67a40(rcx, u"vkGetInstanceProcAddr")
    data_143efbcd0 = rax
    
    if (rax != 0)
        data_143efb698 = data_143efb648(arg1, "vkDestroyInstance")
        data_143efb6a0 = data_143efb648(arg1, "vkEnumeratePhysicalDevices")
        data_143efb6a8 = data_143efb648(arg1, "vkGetPhysicalDeviceFeatures")
        data_143efb6b0 = data_143efb648(arg1, "vkGetPhysicalDeviceFormatProperties")
        data_143efb6b8 = data_143efb648(arg1, "vkGetPhysicalDeviceImageFormatProperties")
        data_143efb6c0 = data_143efb648(arg1, "vkGetPhysicalDeviceProperties")
        data_143efb6c8 = data_143efb648(arg1, "vkGetPhysicalDeviceQueueFamilyProperties")
        data_143efb6d0 = data_143efb648(arg1, "vkGetPhysicalDeviceMemoryProperties")
        data_143efb6d8 = data_143efb648(arg1, "vkCreateDevice")
        data_143efb6e0 = data_143efb648(arg1, "vkDestroyDevice")
        data_143efb6e8 = data_143efb648(arg1, "vkEnumerateDeviceExtensionProperties")
        data_143efb6f0 = data_143efb648(arg1, "vkEnumerateDeviceLayerProperties")
        data_143efb6f8 = data_143efb648(arg1, "vkGetDeviceQueue")
        data_143efb700 = data_143efb648(arg1, "vkQueueSubmit")
        data_143efb708 = data_143efb648(arg1, "vkQueueWaitIdle")
        data_143efb710 = data_143efb648(arg1, "vkDeviceWaitIdle")
        data_143efb718 = data_143efb648(arg1, "vkAllocateMemory")
        data_143efb720 = data_143efb648(arg1, "vkFreeMemory")
        data_143efb728 = data_143efb648(arg1, "vkMapMemory")
        data_143efb730 = data_143efb648(arg1, "vkUnmapMemory")
        data_143efb738 = data_143efb648(arg1, "vkFlushMappedMemoryRanges")
        data_143efb740 = data_143efb648(arg1, "vkInvalidateMappedMemoryRanges")
        data_143efb748 = data_143efb648(arg1, "vkGetDeviceMemoryCommitment")
        data_143efb750 = data_143efb648(arg1, "vkBindBufferMemory")
        data_143efb758 = data_143efb648(arg1, "vkBindImageMemory")
        data_143efb760 = data_143efb648(arg1, "vkGetBufferMemoryRequirements")
        data_143efb768 = data_143efb648(arg1, "vkGetImageMemoryRequirements")
        data_143efb770 = data_143efb648(arg1, "vkGetImageSparseMemoryRequirements")
        data_143efb778 = data_143efb648(arg1, "vkGetPhysicalDeviceSparseImageFormatProperties")
        data_143efb780 = data_143efb648(arg1, "vkQueueBindSparse")
        data_143efb788 = data_143efb648(arg1, "vkCreateFence")
        data_143efb790 = data_143efb648(arg1, "vkDestroyFence")
        data_143efb798 = data_143efb648(arg1, "vkResetFences")
        data_143efb7a0 = data_143efb648(arg1, "vkGetFenceStatus")
        data_143efb7a8 = data_143efb648(arg1, "vkWaitForFences")
        data_143efb7b0 = data_143efb648(arg1, "vkCreateSemaphore")
        data_143efb7b8 = data_143efb648(arg1, "vkDestroySemaphore")
        data_143efb7c0 = data_143efb648(arg1, "vkCreateEvent")
        data_143efb7c8 = data_143efb648(arg1, "vkDestroyEvent")
        data_143efb7d0 = data_143efb648(arg1, "vkGetEventStatus")
        data_143efb7d8 = data_143efb648(arg1, "vkSetEvent")
        data_143efb7e0 = data_143efb648(arg1, "vkResetEvent")
        data_143efb7e8 = data_143efb648(arg1, "vkCreateQueryPool")
        data_143efb7f0 = data_143efb648(arg1, "vkDestroyQueryPool")
        data_143efb7f8 = data_143efb648(arg1, "vkGetQueryPoolResults")
        data_143efb800 = data_143efb648(arg1, "vkCreateBuffer")
        data_143efb808 = data_143efb648(arg1, "vkDestroyBuffer")
        data_143efb810 = data_143efb648(arg1, "vkCreateBufferView")
        data_143efb818 = data_143efb648(arg1, "vkDestroyBufferView")
        data_143efb820 = data_143efb648(arg1, "vkCreateImage")
        data_143efb828 = data_143efb648(arg1, "vkDestroyImage")
        data_143efb830 = data_143efb648(arg1, "vkGetImageSubresourceLayout")
        data_143efb838 = data_143efb648(arg1, "vkCreateImageView")
        data_143efb840 = data_143efb648(arg1, "vkDestroyImageView")
        data_143efb848 = data_143efb648(arg1, "vkCreateShaderModule")
        data_143efb850 = data_143efb648(arg1, "vkDestroyShaderModule")
        data_143efb858 = data_143efb648(arg1, "vkCreatePipelineCache")
        data_143efb860 = data_143efb648(arg1, "vkDestroyPipelineCache")
        data_143efb868 = data_143efb648(arg1, "vkGetPipelineCacheData")
        data_143efb870 = data_143efb648(arg1, "vkMergePipelineCaches")
        data_143efb878 = data_143efb648(arg1, "vkCreateGraphicsPipelines")
        data_143efb880 = data_143efb648(arg1, "vkCreateComputePipelines")
        data_143efb888 = data_143efb648(arg1, "vkDestroyPipeline")
        data_143efb890 = data_143efb648(arg1, "vkCreatePipelineLayout")
        data_143efb898 = data_143efb648(arg1, "vkDestroyPipelineLayout")
        data_143efb8a0 = data_143efb648(arg1, "vkCreateSampler")
        data_143efb8a8 = data_143efb648(arg1, "vkDestroySampler")
        data_143efb8b0 = data_143efb648(arg1, "vkCreateDescriptorSetLayout")
        data_143efb8b8 = data_143efb648(arg1, "vkDestroyDescriptorSetLayout")
        data_143efb8c0 = data_143efb648(arg1, "vkCreateDescriptorPool")
        data_143efb8c8 = data_143efb648(arg1, "vkDestroyDescriptorPool")
        data_143efb8d0 = data_143efb648(arg1, "vkResetDescriptorPool")
        data_143efb8d8 = data_143efb648(arg1, "vkAllocateDescriptorSets")
        data_143efb8e0 = data_143efb648(arg1, "vkFreeDescriptorSets")
        data_143efb8e8 = data_143efb648(arg1, "vkUpdateDescriptorSets")
        data_143efb8f0 = data_143efb648(arg1, "vkCreateFramebuffer")
        data_143efb8f8 = data_143efb648(arg1, "vkDestroyFramebuffer")
        data_143efb900 = data_143efb648(arg1, "vkCreateRenderPass")
        data_143efb908 = data_143efb648(arg1, "vkDestroyRenderPass")
        data_143efb910 = data_143efb648(arg1, "vkGetRenderAreaGranularity")
        data_143efb918 = data_143efb648(arg1, "vkCreateCommandPool")
        data_143efb920 = data_143efb648(arg1, "vkDestroyCommandPool")
        data_143efb928 = data_143efb648(arg1, "vkResetCommandPool")
        data_143efb930 = data_143efb648(arg1, "vkAllocateCommandBuffers")
        data_143efb938 = data_143efb648(arg1, "vkFreeCommandBuffers")
        data_143efb940 = data_143efb648(arg1, "vkBeginCommandBuffer")
        data_143efb948 = data_143efb648(arg1, "vkEndCommandBuffer")
        data_143efb950 = data_143efb648(arg1, "vkResetCommandBuffer")
        data_143efb958 = data_143efb648(arg1, "vkCmdBindPipeline")
        data_143efb960 = data_143efb648(arg1, "vkCmdSetViewport")
        data_143efb968 = data_143efb648(arg1, "vkCmdSetScissor")
        data_143efb970 = data_143efb648(arg1, "vkCmdSetLineWidth")
        data_143efb978 = data_143efb648(arg1, "vkCmdSetDepthBias")
        data_143efb980 = data_143efb648(arg1, "vkCmdSetBlendConstants")
        data_143efb988 = data_143efb648(arg1, "vkCmdSetDepthBounds")
        data_143efb990 = data_143efb648(arg1, "vkCmdSetStencilCompareMask")
        data_143efb998 = data_143efb648(arg1, "vkCmdSetStencilWriteMask")
        data_143efb9a0 = data_143efb648(arg1, "vkCmdSetStencilReference")
        data_143efb9a8 = data_143efb648(arg1, "vkCmdBindDescriptorSets")
        data_143efb9b0 = data_143efb648(arg1, "vkCmdBindIndexBuffer")
        data_143efb9b8 = data_143efb648(arg1, "vkCmdBindVertexBuffers")
        data_143efb9c0 = data_143efb648(arg1, "vkCmdDraw")
        data_143efb9c8 = data_143efb648(arg1, "vkCmdDrawIndexed")
        data_143efb9d0 = data_143efb648(arg1, "vkCmdDrawIndirect")
        data_143efb9d8 = data_143efb648(arg1, "vkCmdDrawIndexedIndirect")
        data_143efb9e0 = data_143efb648(arg1, "vkCmdDispatch")
        data_143efb9e8 = data_143efb648(arg1, "vkCmdDispatchIndirect")
        data_143efb9f0 = data_143efb648(arg1, "vkCmdCopyBuffer")
        data_143efb9f8 = data_143efb648(arg1, "vkCmdCopyImage")
        data_143efba00 = data_143efb648(arg1, "vkCmdBlitImage")
        data_143efba08 = data_143efb648(arg1, "vkCmdCopyBufferToImage")
        data_143efba10 = data_143efb648(arg1, "vkCmdCopyImageToBuffer")
        data_143efba18 = data_143efb648(arg1, "vkCmdUpdateBuffer")
        data_143efba20 = data_143efb648(arg1, "vkCmdFillBuffer")
        data_143efba28 = data_143efb648(arg1, "vkCmdClearColorImage")
        data_143efba30 = data_143efb648(arg1, "vkCmdClearDepthStencilImage")
        data_143efba38 = data_143efb648(arg1, "vkCmdClearAttachments")
        data_143efba40 = data_143efb648(arg1, "vkCmdResolveImage")
        data_143efba48 = data_143efb648(arg1, "vkCmdSetEvent")
        data_143efba50 = data_143efb648(arg1, "vkCmdResetEvent")
        data_143efba58 = data_143efb648(arg1, "vkCmdWaitEvents")
        data_143efba60 = data_143efb648(arg1, "vkCmdPipelineBarrier")
        data_143efba68 = data_143efb648(arg1, "vkCmdBeginQuery")
        data_143efba70 = data_143efb648(arg1, "vkCmdEndQuery")
        data_143efba78 = data_143efb648(arg1, "vkCmdResetQueryPool")
        data_143efba80 = data_143efb648(arg1, "vkCmdWriteTimestamp")
        data_143efba88 = data_143efb648(arg1, "vkCmdCopyQueryPoolResults")
        data_143efba90 = data_143efb648(arg1, "vkCmdPushConstants")
        data_143efba98 = data_143efb648(arg1, "vkCmdBeginRenderPass")
        data_143efbaa0 = data_143efb648(arg1, "vkCmdNextSubpass")
        data_143efbaa8 = data_143efb648(arg1, "vkCmdEndRenderPass")
        data_143efbab0 = data_143efb648(arg1, "vkCmdExecuteCommands")
        data_143efbab8 = data_143efb648(arg1, "vkCreateSwapchainKHR")
        data_143efbac0 = data_143efb648(arg1, "vkDestroySwapchainKHR")
        data_143efbac8 = data_143efb648(arg1, "vkGetSwapchainImagesKHR")
        data_143efbad0 = data_143efb648(arg1, "vkAcquireNextImageKHR")
        int64_t rax_137 = data_143efb648(arg1, "vkQueuePresentKHR")
        char rcx_138 = 1
        bool cond:0_1 = data_143efb698 == 0
        data_143efbad8 = rax_137
        
        if (cond:0_1)
            rcx_138 = 0
        
        if (data_143efb6a0 == 0)
            rcx_138 = 0
        
        char rdx_1 = rcx_138
        
        if (data_143efb6a8 == 0)
            rdx_1 = 0
        
        char rax_138 = rdx_1
        
        if (data_143efb6b0 == 0)
            rax_138 = 0
        
        char rcx_139 = rax_138
        
        if (data_143efb6b8 == 0)
            rcx_139 = 0
        
        char rax_139 = rcx_139
        
        if (data_143efb6c0 == 0)
            rax_139 = 0
        
        char rcx_140 = rax_139
        
        if (data_143efb6c8 == 0)
            rcx_140 = 0
        
        char rax_140 = rcx_140
        
        if (data_143efb6d0 == 0)
            rax_140 = 0
        
        char rcx_141 = rax_140
        
        if (data_143efb6d8 == 0)
            rcx_141 = 0
        
        char rax_141 = rcx_141
        
        if (data_143efb6e0 == 0)
            rax_141 = 0
        
        char rcx_142 = rax_141
        
        if (data_143efb6e8 == 0)
            rcx_142 = 0
        
        char rax_142 = rcx_142
        
        if (data_143efb6f0 == 0)
            rax_142 = 0
        
        char rcx_143 = rax_142
        
        if (data_143efb6f8 == 0)
            rcx_143 = 0
        
        char rax_143 = rcx_143
        
        if (data_143efb700 == 0)
            rax_143 = 0
        
        char rcx_144 = rax_143
        
        if (data_143efb708 == 0)
            rcx_144 = 0
        
        char rax_144 = rcx_144
        
        if (data_143efb710 == 0)
            rax_144 = 0
        
        char rcx_145 = rax_144
        
        if (data_143efb718 == 0)
            rcx_145 = 0
        
        char rax_145 = rcx_145
        
        if (data_143efb720 == 0)
            rax_145 = 0
        
        char rcx_146 = rax_145
        
        if (data_143efb728 == 0)
            rcx_146 = 0
        
        char rax_146 = rcx_146
        
        if (data_143efb730 == 0)
            rax_146 = 0
        
        char rcx_147 = rax_146
        
        if (data_143efb738 == 0)
            rcx_147 = 0
        
        char rax_147 = rcx_147
        
        if (data_143efb740 == 0)
            rax_147 = 0
        
        char rcx_148 = rax_147
        
        if (data_143efb748 == 0)
            rcx_148 = 0
        
        char rax_148 = rcx_148
        
        if (data_143efb750 == 0)
            rax_148 = 0
        
        char rcx_149 = rax_148
        
        if (data_143efb758 == 0)
            rcx_149 = 0
        
        char rax_149 = rcx_149
        
        if (data_143efb760 == 0)
            rax_149 = 0
        
        char rcx_150 = rax_149
        
        if (data_143efb768 == 0)
            rcx_150 = 0
        
        char rax_150 = rcx_150
        
        if (data_143efb770 == 0)
            rax_150 = 0
        
        char rcx_151 = rax_150
        
        if (data_143efb778 == 0)
            rcx_151 = 0
        
        char rax_151 = rcx_151
        
        if (data_143efb780 == 0)
            rax_151 = 0
        
        char rcx_152 = rax_151
        
        if (data_143efb788 == 0)
            rcx_152 = 0
        
        char rax_152 = rcx_152
        
        if (data_143efb790 == 0)
            rax_152 = 0
        
        char rcx_153 = rax_152
        
        if (data_143efb798 == 0)
            rcx_153 = 0
        
        char rax_153 = rcx_153
        
        if (data_143efb7a0 == 0)
            rax_153 = 0
        
        char rcx_154 = rax_153
        
        if (data_143efb7a8 == 0)
            rcx_154 = 0
        
        char rax_154 = rcx_154
        
        if (data_143efb7b0 == 0)
            rax_154 = 0
        
        char rcx_155 = rax_154
        
        if (data_143efb7b8 == 0)
            rcx_155 = 0
        
        char rax_155 = rcx_155
        
        if (data_143efb7c0 == 0)
            rax_155 = 0
        
        char rcx_156 = rax_155
        
        if (data_143efb7c8 == 0)
            rcx_156 = 0
        
        char rax_156 = rcx_156
        
        if (data_143efb7d0 == 0)
            rax_156 = 0
        
        char rcx_157 = rax_156
        
        if (data_143efb7d8 == 0)
            rcx_157 = 0
        
        char rax_157 = rcx_157
        
        if (data_143efb7e0 == 0)
            rax_157 = 0
        
        char rcx_158 = rax_157
        
        if (data_143efb7e8 == 0)
            rcx_158 = 0
        
        char rax_158 = rcx_158
        
        if (data_143efb7f0 == 0)
            rax_158 = 0
        
        char rcx_159 = rax_158
        
        if (data_143efb7f8 == 0)
            rcx_159 = 0
        
        char rax_159 = rcx_159
        
        if (data_143efb800 == 0)
            rax_159 = 0
        
        char rcx_160 = rax_159
        
        if (data_143efb808 == 0)
            rcx_160 = 0
        
        char rax_160 = rcx_160
        
        if (data_143efb810 == 0)
            rax_160 = 0
        
        char rcx_161 = rax_160
        
        if (data_143efb818 == 0)
            rcx_161 = 0
        
        char rax_161 = rcx_161
        
        if (data_143efb820 == 0)
            rax_161 = 0
        
        char rcx_162 = rax_161
        
        if (data_143efb828 == 0)
            rcx_162 = 0
        
        char rax_162 = rcx_162
        
        if (data_143efb830 == 0)
            rax_162 = 0
        
        char rcx_163 = rax_162
        
        if (data_143efb838 == 0)
            rcx_163 = 0
        
        char rax_163 = rcx_163
        
        if (data_143efb840 == 0)
            rax_163 = 0
        
        char rcx_164 = rax_163
        
        if (data_143efb848 == 0)
            rcx_164 = 0
        
        char rax_164 = rcx_164
        
        if (data_143efb850 == 0)
            rax_164 = 0
        
        char rcx_165 = rax_164
        
        if (data_143efb858 == 0)
            rcx_165 = 0
        
        char rax_165 = rcx_165
        
        if (data_143efb860 == 0)
            rax_165 = 0
        
        char rcx_166 = rax_165
        
        if (data_143efb868 == 0)
            rcx_166 = 0
        
        char rax_166 = rcx_166
        
        if (data_143efb870 == 0)
            rax_166 = 0
        
        char rcx_167 = rax_166
        
        if (data_143efb878 == 0)
            rcx_167 = 0
        
        char rax_167 = rcx_167
        
        if (data_143efb880 == 0)
            rax_167 = 0
        
        char rcx_168 = rax_167
        
        if (data_143efb888 == 0)
            rcx_168 = 0
        
        char rax_168 = rcx_168
        
        if (data_143efb890 == 0)
            rax_168 = 0
        
        char rcx_169 = rax_168
        
        if (data_143efb898 == 0)
            rcx_169 = 0
        
        char rax_169 = rcx_169
        
        if (data_143efb8a0 == 0)
            rax_169 = 0
        
        char rcx_170 = rax_169
        
        if (data_143efb8a8 == 0)
            rcx_170 = 0
        
        char rax_170 = rcx_170
        
        if (data_143efb8b0 == 0)
            rax_170 = 0
        
        char rcx_171 = rax_170
        
        if (data_143efb8b8 == 0)
            rcx_171 = 0
        
        char rax_171 = rcx_171
        
        if (data_143efb8c0 == 0)
            rax_171 = 0
        
        char rcx_172 = rax_171
        
        if (data_143efb8c8 == 0)
            rcx_172 = 0
        
        char rax_172 = rcx_172
        
        if (data_143efb8d0 == 0)
            rax_172 = 0
        
        char rcx_173 = rax_172
        
        if (data_143efb8d8 == 0)
            rcx_173 = 0
        
        char rax_173 = rcx_173
        
        if (data_143efb8e0 == 0)
            rax_173 = 0
        
        char rcx_174 = rax_173
        
        if (data_143efb8e8 == 0)
            rcx_174 = 0
        
        char rax_174 = rcx_174
        
        if (data_143efb8f0 == 0)
            rax_174 = 0
        
        char rcx_175 = rax_174
        
        if (data_143efb8f8 == 0)
            rcx_175 = 0
        
        char rax_175 = rcx_175
        
        if (data_143efb900 == 0)
            rax_175 = 0
        
        char rcx_176 = rax_175
        
        if (data_143efb908 == 0)
            rcx_176 = 0
        
        char rax_176 = rcx_176
        
        if (data_143efb910 == 0)
            rax_176 = 0
        
        char rcx_177 = rax_176
        
        if (data_143efb918 == 0)
            rcx_177 = 0
        
        char rax_177 = rcx_177
        
        if (data_143efb920 == 0)
            rax_177 = 0
        
        char rcx_178 = rax_177
        
        if (data_143efb928 == 0)
            rcx_178 = 0
        
        char rax_178 = rcx_178
        
        if (data_143efb930 == 0)
            rax_178 = 0
        
        char rcx_179 = rax_178
        
        if (data_143efb938 == 0)
            rcx_179 = 0
        
        char rax_179 = rcx_179
        
        if (data_143efb940 == 0)
            rax_179 = 0
        
        char rcx_180 = rax_179
        
        if (data_143efb948 == 0)
            rcx_180 = 0
        
        char rax_180 = rcx_180
        
        if (data_143efb950 == 0)
            rax_180 = 0
        
        char rcx_181 = rax_180
        
        if (data_143efb958 == 0)
            rcx_181 = 0
        
        char rax_181 = rcx_181
        
        if (data_143efb960 == 0)
            rax_181 = 0
        
        char rcx_182 = rax_181
        
        if (data_143efb968 == 0)
            rcx_182 = 0
        
        char rax_182 = rcx_182
        
        if (data_143efb970 == 0)
            rax_182 = 0
        
        char rcx_183 = rax_182
        
        if (data_143efb978 == 0)
            rcx_183 = 0
        
        char rax_183 = rcx_183
        
        if (data_143efb980 == 0)
            rax_183 = 0
        
        char rcx_184 = rax_183
        
        if (data_143efb988 == 0)
            rcx_184 = 0
        
        char rax_184 = rcx_184
        
        if (data_143efb990 == 0)
            rax_184 = 0
        
        char rcx_185 = rax_184
        
        if (data_143efb998 == 0)
            rcx_185 = 0
        
        char rax_185 = rcx_185
        
        if (data_143efb9a0 == 0)
            rax_185 = 0
        
        char rcx_186 = rax_185
        
        if (data_143efb9a8 == 0)
            rcx_186 = 0
        
        char rax_186 = rcx_186
        
        if (data_143efb9b0 == 0)
            rax_186 = 0
        
        char rcx_187 = rax_186
        
        if (data_143efb9b8 == 0)
            rcx_187 = 0
        
        char rax_187 = rcx_187
        
        if (data_143efb9c0 == 0)
            rax_187 = 0
        
        char rcx_188 = rax_187
        
        if (data_143efb9c8 == 0)
            rcx_188 = 0
        
        char rax_188 = rcx_188
        
        if (data_143efb9d0 == 0)
            rax_188 = 0
        
        char rcx_189 = rax_188
        
        if (data_143efb9d8 == 0)
            rcx_189 = 0
        
        char rax_189 = rcx_189
        
        if (data_143efb9e0 == 0)
            rax_189 = 0
        
        char rcx_190 = rax_189
        
        if (data_143efb9e8 == 0)
            rcx_190 = 0
        
        char rax_190 = rcx_190
        
        if (data_143efb9f0 == 0)
            rax_190 = 0
        
        char rcx_191 = rax_190
        
        if (data_143efb9f8 == 0)
            rcx_191 = 0
        
        char rax_191 = rcx_191
        
        if (data_143efba00 == 0)
            rax_191 = 0
        
        char rcx_192 = rax_191
        
        if (data_143efba08 == 0)
            rcx_192 = 0
        
        char rax_192 = rcx_192
        
        if (data_143efba10 == 0)
            rax_192 = 0
        
        char rcx_193 = rax_192
        
        if (data_143efba18 == 0)
            rcx_193 = 0
        
        char rax_193 = rcx_193
        
        if (data_143efba20 == 0)
            rax_193 = 0
        
        char rcx_194 = rax_193
        
        if (data_143efba28 == 0)
            rcx_194 = 0
        
        char rax_194 = rcx_194
        
        if (data_143efba30 == 0)
            rax_194 = 0
        
        char rcx_195 = rax_194
        
        if (data_143efba38 == 0)
            rcx_195 = 0
        
        char rax_195 = rcx_195
        
        if (data_143efba40 == 0)
            rax_195 = 0
        
        char rcx_196 = rax_195
        
        if (data_143efba48 == 0)
            rcx_196 = 0
        
        char rax_196 = rcx_196
        
        if (data_143efba50 == 0)
            rax_196 = 0
        
        char rcx_197 = rax_196
        
        if (data_143efba58 == 0)
            rcx_197 = 0
        
        char rax_197 = rcx_197
        
        if (data_143efba60 == 0)
            rax_197 = 0
        
        char rcx_198 = rax_197
        
        if (data_143efba68 == 0)
            rcx_198 = 0
        
        char rax_198 = rcx_198
        
        if (data_143efba70 == 0)
            rax_198 = 0
        
        char rcx_199 = rax_198
        
        if (data_143efba78 == 0)
            rcx_199 = 0
        
        char rax_199 = rcx_199
        
        if (data_143efba80 == 0)
            rax_199 = 0
        
        char rcx_200 = rax_199
        
        if (data_143efba88 == 0)
            rcx_200 = 0
        
        char rax_200 = rcx_200
        
        if (data_143efba90 == 0)
            rax_200 = 0
        
        char rcx_201 = rax_200
        
        if (data_143efba98 == 0)
            rcx_201 = 0
        
        char rax_201 = rcx_201
        
        if (data_143efbaa0 == 0)
            rax_201 = 0
        
        char rcx_202 = rax_201
        
        if (data_143efbaa8 == 0)
            rcx_202 = 0
        
        char rax_202 = rcx_202
        
        if (data_143efbab0 == 0)
            rax_202 = 0
        
        char rcx_203 = rax_202
        
        if (data_143efbab8 == 0)
            rcx_203 = 0
        
        char rax_203 = rcx_203
        
        if (data_143efbac0 == 0)
            rax_203 = 0
        
        char rcx_204 = rax_203
        
        if (data_143efbac8 == 0)
            rcx_204 = 0
        
        char rax_204 = rcx_204
        
        if (data_143efbad0 == 0)
            rax_204 = 0
        
        char rbx_1 = rax_204
        
        if (rax_137 == 0)
            rbx_1 = 0
        
        data_143efbae0 = data_143efb648(arg1, "vkDestroySurfaceKHR", rax_137)
        data_143efbae8 = data_143efb648(arg1, "vkGetPhysicalDeviceSurfaceSupportKHR")
        data_143efbaf0 = data_143efb648(arg1, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR")
        data_143efbaf8 = data_143efb648(arg1, "vkGetPhysicalDeviceSurfaceFormatsKHR")
        rax = data_143efb648(arg1, "vkGetPhysicalDeviceSurfacePresentModesKHR")
        char rcx_210 = rbx_1
        
        if (data_143efbae0 == 0)
            rcx_210 = 0
        
        char rdx_2 = rcx_210
        
        if (data_143efbae8 == 0)
            rdx_2 = 0
        
        data_143efbb00 = rax
        char rcx_211 = rdx_2
        
        if (data_143efbaf0 == 0)
            rcx_211 = 0
        
        char rdx_3 = rcx_211
        
        if (data_143efbaf8 == 0)
            rdx_3 = 0
        
        if (rax != 0 && rdx_3 != 0)
            data_143efbb08 = data_143efb648(arg1, "vkCreateSharedSwapchainsKHR")
            data_143efbb10 = data_143efb648(arg1, "vkCreateSamplerYcbcrConversionKHR")
            data_143efbb18 = data_143efb648(arg1, "vkDestroySamplerYcbcrConversionKHR")
            data_143efbb20 = data_143efb648(arg1, "vkCreateWin32SurfaceKHR")
            data_143efbb28 = data_143efb648(arg1, "vkGetPhysicalDeviceProperties2KHR")
            data_143efbb30 = data_143efb648(arg1, "vkGetImageMemoryRequirements2KHR")
            data_143efbb38 = data_143efb648(arg1, "vkCmdWriteBufferMarkerAMD")
            data_143efbb40 = data_143efb648(arg1, "vkCmdSetCheckpointNV")
            data_143efbb48 = data_143efb648(arg1, "vkGetQueueCheckpointDataNV")
            data_143efbb50 = data_143efb648(arg1, "vkGetBufferMemoryRequirements2KHR")
            int64_t rax_218
            rax_218.b = 1
            return rax_218
        
        HMODULE hLibModule = data_143efbcc8
        
        if (hLibModule != 0)
            FreeLibrary(hLibModule)
            data_143efbcc8 = 0

rax.b = 0
return rax
