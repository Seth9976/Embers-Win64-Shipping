// 函数: sub_1426b3f90
// 地址: 0x1426b3f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1426b21d0(arg1, arg2)
void* rdx = *(arg1 + 0xc0)
int64_t rsi = 0
char rbp = result.b
int64_t result_1

if (rdx == 0 || result.b == 0xff)
    result_1 = 0
else
    result = zx.q(*(rdx + 0x4c))
    
    if (rbp u< result.b)
        void* rcx_3 = *(rdx + 0x30)
        
        if (rcx_3 == 0)
            result_1 = 0
        else
            result = sub_1426b21a0(rcx_3, rbp)
            result_1 = result
    else
        uint64_t rcx_1 = zx.q(rbp) - zx.q(result.b)
        result = *(rdx + 0x38)
        result_1 = result + rcx_1 * 0x18

int512_t zmm0

if (result_1 == 0)
    zmm0.o = zx.o(0)
else
    void* rbx_1 = *(result_1 + 8)
    
    if (rbx_1 == 0)
        zmm0.o = zx.o(0)
    else
        int64_t rbx_2 = *(rbx_1 + 0x10)
        result, zmm0 = sub_14272e150()
        
        if (rbx_2 != result)
            zmm0.o = zx.o(0)
        else
            if (*(arg1 + 0xd0) != 0 && zx.d(rbp) s< *(arg1 + 0xe0))
                rsi = zx.q(*(*(arg1 + 0xd8) + (zx.q(rbp) << 1))) + *(arg1 + 0xc8)
            
            result = zx.q(*(*(result_1 + 8) + 0x2b) u>> 1) & 1
            int32_t* rcx_5 = rsi + (result << 2)
            
            if (rcx_5 == 0)
                zmm0.o = zx.o(0)
            else
                zmm0.o = *rcx_5
return result
