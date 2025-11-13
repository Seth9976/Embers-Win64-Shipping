// 函数: sub_14238cc40
// 地址: 0x14238cc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
int64_t* rax = sub_140d30800(arg2, &var_38)
int16_t* rbx

if (rax[1].d == 0)
    rbx = &data_142d40450
else
    rbx = *rax

int64_t* result = sub_140d2ee50(sub_140d41340(), nullptr, rbx, 0)
int64_t rcx_2 = var_38
*arg3 = result

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t* rbx_1 = *arg3

if (rbx_1 != 0)
    int32_t rax_2 = *(rbx_1 + 0xc)
    void* const rax_8
    
    if (rax_2 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_2)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_4 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_2) * 0x18
    
    result = zx.q(*(rax_8 + 8) u>> 0x1b)
    
    if ((result.b & 1) != 0)
        *arg3 = nullptr
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        void* rax_10 = sub_140cdddf0()
        void* rdx_4 = rbx_1[2]
        result = sx.q(*(rax_10 + 0x38))
        
        if (result.d s<= *(rdx_4 + 0x38))
            int64_t* result_1 = result
            result = *(rdx_4 + 0x30)
            
            if (result[result_1] == rax_10 + 0x30)
                var_38 = *arg2
                void var_30
                sub_140596d10(&var_30, &arg2[1])
                void var_20
                result = sub_140b97b00(arg2, sub_1423905d0(arg1, &var_20, rbx_1, &var_38, arg3))
                int64_t var_18
                
                if (var_18 != 0)
                    result = sub_140a74f90(var_18)

if (*arg3 != 0)
    *(arg3 + 9) = 0

return result
