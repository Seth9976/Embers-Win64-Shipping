// 函数: sub_1426e4d50
// 地址: 0x1426e4d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140fe7790(arg2)
int64_t result_1 = result
int64_t* rdi

if (result == 0)
    result_1 = 0
    rdi = nullptr
else
    void* rax = sub_1427297d0()
    void* r9_1 = *(result_1 + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(r9_1 + 0x38))
        result_1 = 0
        rdi = nullptr
    else if (*(*(r9_1 + 0x30) + (result << 3)) != rax + 0x30)
        result_1 = 0
        rdi = nullptr
    else
        rdi = *(result_1 + 0xc0)

if (rdi != 0)
    int64_t* rax_2 = sub_1426b2b20(result_1, arg1, sub_1426b0430(result_1, arg1))
    *rax_2 = 0
    rax_2[1] = data_143b58058.q
    rax_2[2].d = data_143b58060
    *(rax_2 + 0x14) = 0
    int64_t r8_1 = *rdi
    (*(r8_1 + 0x7e8))(rdi, zx.q(*(arg1 + 0x98)), r8_1)
    void* const rbx
    
    if (*(arg1 + 0x88) == 0)
        rbx = nullptr
    else
        void* rax_3 = sub_14272ef20()
        
        if (rax_3 == 0)
            rbx = nullptr
        else
            rbx = *(arg1 + 0x88)
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                rbx = nullptr
    
    if (rbx != sub_14272e650())
        int64_t var_38
        sub_1426a2930(arg2, &var_38, arg3)
        int64_t rax_9 = *rdi
        uint64_t r8_4 = zx.q(*(arg1 + 0x98))
        int64_t var_28 = var_38
        int32_t var_30
        int32_t var_20_1 = var_30
        (*(rax_9 + 0x7d8))(rdi, &var_28, r8_4)
        rax_2[1] = var_38
        rax_2[2].d = var_30
    else
        result = sub_1426a2600(arg2, arg3)
        
        if (result != 0)
            int64_t rax_7 = sub_142452380()
            void* rdx_5 = *(result + 0x10)
            int64_t rcx_8 = sx.q(*(rax_7 + 0x38))
            
            if (rcx_8.d s<= *(rdx_5 + 0x38) && *(*(rdx_5 + 0x30) + (rcx_8 << 3)) == rax_7 + 0x30)
                (*(*rdi + 0x7e0))(rdi, result, zx.q(*(arg1 + 0x98)))
                *rax_2 = result
                *(rax_2 + 0x14) = 1

result.b = 1
return result
