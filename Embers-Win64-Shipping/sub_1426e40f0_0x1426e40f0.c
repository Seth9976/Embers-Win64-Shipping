// 函数: sub_1426e40f0
// 地址: 0x1426e40f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1426b17a0(arg2)
int64_t result_2 = result

if (result != 0)
    int64_t rax = sub_1427249f0()
    void* rcx_1 = *(result_2 + 0x10)
    result = rax + 0x30
    int64_t rdx = sx.q(*(result + 8))
    
    if (rdx.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx << 3)) == result)
        void* rdi = *(result_2 + 0x2e0)
        
        if (rdi != 0)
            void* rax_1 = sub_1427297d0()
            void* rdx_1 = *(rdi + 0x10)
            result = sx.q(*(rax_1 + 0x38))
            
            if (result.d s<= *(rdx_1 + 0x38))
                int64_t result_1 = result
                result = *(rdx_1 + 0x30)
                
                if (*(result + (result_1 << 3)) == rax_1 + 0x30)
                    result = sub_1426b39d0(rdi, arg1)
                    
                    if (result.d == 0)
                        if (arg3 == 4 || arg3 == 1)
                            int32_t r8_1
                            r8_1.b = *(arg2 + 0x88) != 2
                            return sub_1426b08f0(arg1, rdi, r8_1, arg4)
                        
                        if (arg3 == 3)
                            return (*(*arg1 + 0x2e0))(arg1, arg2)
                    else if (result.d == 1)
                        result = zx.q(arg3 - 1)
                        
                        if ((result.d & 0xfffffffc) == 0 && arg3 != 2)
                            return sub_1426b08c0(arg1, rdi, arg4)

return result
