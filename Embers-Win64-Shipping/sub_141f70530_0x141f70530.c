// 函数: sub_141f70530
// 地址: 0x141f70530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = sub_141ee76e0(arg1)

if (result.b != 0 || (*(arg1 + 0x88) & 1) == 0 || *(arg1 + 0x14f) != result.b)
    result = *(arg1 + 0x228)
    
    if ((result != arg2 || *(arg1 + 0x318) != arg3 || not(arg4[0] f== *(arg1 + 0x310)))
            && *(arg1 + 0x220) == 1)
        if (result != arg2)
            *(arg1 + 0x228) = arg2
            result = sub_141f70300(arg1)
        
        if (*(arg1 + 0x318) != arg3)
            *(arg1 + 0x318) = arg3
            result = sub_141f70200(arg1)
        
        if (not(arg4[0] f== *(arg1 + 0x310)))
            void* rdi_1 = *(arg1 + 0x3e8)
            *(arg1 + 0x310) = arg4[0]
            
            if (rdi_1 != 0)
                float var_30_1 = arg4[0]
                void* var_38_1 = arg1 + 0x3c0
                void* var_48_1 = arg1 + 0x330
                void* var_28_1 = rdi_1
                char rax = sub_140a80f40()
                
                if (rax != 0)
                    return sub_141f6bde0(rdi_1, arg4, arg1 + 0x270, arg1 + 0x330, arg1 + 0x300, 
                        arg1 + 0x3c0)
                
                if (data_143f138f4 == rax)
                    if (data_143de5480 == rax)
                        return sub_141f6bde0(rdi_1, arg4, arg1 + 0x270, arg1 + 0x330, arg1 + 0x300, 
                            arg1 + 0x3c0)
                    
                    uint32_t rax_1
                    rax_1.b = GetCurrentThreadId() == data_143de5470
                    
                    if (rax_1.b != 0)
                        return sub_141f6bde0(rdi_1, arg4, arg1 + 0x270, arg1 + 0x330, arg1 + 0x300, 
                            arg1 + 0x3c0)
                
                void var_68
                void** rax_2 = sub_141f5a650(&var_68, nullptr, 0xff)
                void* rcx_4 = *rax_2
                *(rcx_4 + 0x10) = (arg1 + 0x270).o
                *(rcx_4 + 0x20) = (arg1 + 0x300).o
                *(rcx_4 + 0x30) = var_30_1.o
                void* rcx_5 = *rax_2
                int32_t r8_1 = rax_2[2].d
                int64_t* rdx = rax_2[1]
                int64_t* rbx_2 = *(rcx_5 + 0x48)
                int64_t* var_70_1 = rbx_2
                void* rdi_2 = &rbx_2[9]
                
                if (rbx_2 != 0)
                    *rdi_2 += 1
                    rbx_2 = var_70_1
                
                result = sub_141b66b40(rcx_5, rdx, r8_1, 1)
                
                if (rbx_2 != 0)
                    result = zx.q(*rdi_2)
                    *rdi_2 -= 1
                    
                    if (result.d == 1)
                        return sub_140a2f6e0(var_70_1)

return result
