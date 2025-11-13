// 函数: sub_1421f8890
// 地址: 0x1421f8890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
uint64_t result = sub_140cdd6a0(arg1)

if (result.d s< 0x193)
    int64_t* rcx_1 = arg1[0xc]
    
    if (rcx_1 != 0)
        sub_140cd85e0(rcx_1)
        void* rax = sub_1424a01d0()
        void* rdx_1 = *(arg1[0xc] + 0x10)
        result = sx.q(*(rax + 0x38))
        
        if (result.d s<= *(rdx_1 + 0x38))
            uint64_t result_1 = result
            result = *(rdx_1 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax + 0x30)
                int512_t zmm1
                zmm1.o = zx.o(0)
                int32_t zmm0_1
                zmm0_1, result = sub_141fe5610(&arg1[7], zmm1, 0, nullptr)
                
                if (not(zmm0_1 f> 1f))
                    arg1[0x1c].d &= 0xfffffffe

return result
