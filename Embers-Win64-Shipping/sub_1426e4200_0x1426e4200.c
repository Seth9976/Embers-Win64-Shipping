// 函数: sub_1426e4200
// 地址: 0x1426e4200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1426b17a0(arg2)
int64_t result_2 = result

if (result != 0)
    int64_t rax = sub_1427249f0()
    void* rcx_1 = *(result_2 + 0x10)
    result = rax + 0x30
    int64_t rdx = sx.q(*(result + 8))
    
    if (rdx.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx << 3)) == result)
        void* rbx = *(result_2 + 0x2e0)
        
        if (rbx != 0)
            void* rax_1 = sub_1427297d0()
            void* rdx_1 = *(rbx + 0x10)
            result = sx.q(*(rax_1 + 0x38))
            
            if (result.d s<= *(rdx_1 + 0x38))
                int64_t result_1 = result
                result = *(rdx_1 + 0x30)
                
                if (*(result + (result_1 << 3)) == rax_1 + 0x30)
                    return sub_1426b08f0(arg1, rbx, 1, arg3)

return result
