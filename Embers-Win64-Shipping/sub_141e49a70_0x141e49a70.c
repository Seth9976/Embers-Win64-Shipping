// 函数: sub_141e49a70
// 地址: 0x141e49a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
void* const rdi_1

if (arg1 == 0)
    rdi_1 = nullptr
else
    void* rdi = arg1[4]
    
    if (rdi != 0)
        void* rax_1 = sub_142591550()
        void* rdx_1 = *(rdi + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* r8_1
            r8_1.b = 1
            sub_141f3e990(arg1[4], 1, r8_1.b)
    
    rdi_1 = arg1[0x48]
    
    if (rdi_1 == 0)
        void* rax_5 = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax_5
        rdi_1 = rax_5

void* rsi = arg1[0x4d]
int32_t zmm0

if (rsi == 0)
    zmm0 = (zx.o(0)).d
else
    void* rax_6 = sub_1424771c0()
    void* rdx_2 = *(rsi + 0x10)
    int64_t rax_7 = sx.q(*(rax_6 + 0x38))
    
    if (rax_7.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
        void* rsi_1 = arg1[0x4d]
        
        if (rsi_1 == 0)
            zmm0 = (zx.o(0)).d
        else
            void* rax_9 = sub_14246bfb0()
            void* rdx_3 = *(rsi_1 + 0x10)
            int64_t rax_10 = sx.q(*(rax_9 + 0x38))
            
            if (rax_10.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_10 << 3)) != rax_9 + 0x30)
                zmm0 = (zx.o(0)).d
            else
                zmm0 = *(rsi_1 + 0x90)
    else
        zmm0 = *(rsi + 0x8c)

if (arg2.d f>= zx.o(0).d)
    zmm0 = _mm_min_ss(zmm0, arg2.d)
else
    zmm0 = (zx.o(0)).d

*(rdi_1 + 0x80c) = zmm0
void* result = sub_141df83c0(arg1)

if (result != 0)
    *(result + 0x128) = *(rdi_1 + 0x80c)
    *(result + 0x30) = 0xfffffffe
    *(result + 0x38) = 0xfffffffe

if (arg4 != 0)
    int64_t* rsi_2 = arg1[0x4d]
    
    if (rsi_2 != 0)
        void* rax_12 = sub_14246bfb0()
        void* rdx_4 = rsi_2[2]
        result = sx.q(*(rax_12 + 0x38))
        
        if (result.d s<= *(rdx_4 + 0x38))
            void* result_1 = result
            result = *(rdx_4 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax_12 + 0x30)
                sub_141e30570(&arg1[0x20], arg1[4])
                int64_t rax_13 = *rsi_2
                int32_t arg_20 = *(rdi_1 + 0x80c)
                int64_t var_48 = 0
                int64_t var_40_1 = 0
                (*(rax_13 + 0x288))(rsi_2, &arg_18, &arg_20, &var_48, var_48, var_40_1, arg6, arg5)
                
                if (var_40_1.d s> 0)
                    sub_141e13c40(&arg1[0x20], 1, &var_48, 0x3f800000)
                
                result = sub_141e0e060(arg1, zx.o(0))
                int64_t rcx_10 = var_48
                
                if (rcx_10 != 0)
                    return sub_140a74f90(rcx_10)

return result
