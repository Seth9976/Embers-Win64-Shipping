// 函数: sub_141ed1650
// 地址: 0x141ed1650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_4 = arg2

if (arg2 != 0)
    (*(*arg2 + 0x308))(arg2)

int64_t* result_1
int64_t* result

if (arg1[2].d s> 1)
    int16_t* rdx
    
    if (arg1[2].d == 0)
        rdx = &data_142d40450
    else
        rdx = arg1[1]
    
    int64_t i_1
    sub_140b58260(&i_1, rdx, 0)
    int64_t i = i_1
    char var_20
    void* rdx_1
    
    if (i != 0)
        result_1 = result_4
        int64_t rax_2
        
        if (result_4 == 0)
            rax_2 = 0
        else
            rax_2 = result_4[9]
        
        var_20.q = rax_2
        int32_t var_18_1 = 0xffffffff
        int16_t var_14_1 = 0x101
        char var_12_1 = 0
        sub_141ee7a60(&result_1)
        rdx_1 = var_20.q
    
    if (i == 0 || rdx_1 == 0)
    label_141ed1713:
        rdx_1 = nullptr
    else
        while (*(rdx_1 + 0x18) != i)
            var_20.q = *(rdx_1 + 0x28)
            sub_141ee7a60(&result_1)
            rdx_1 = var_20.q
            
            if (rdx_1 == 0)
                goto label_141ed1713
    
    int128_t* rax_4 = sub_141ee1460(&result_1, rdx_1, arg1[3])
    sub_140cea340()
    
    if (sub_140cc1670(rax_4, &data_143e1b820) == 0)
        result = nullptr
    else
        result = *rax_4
else if (arg1[6].b != 0)
    if (result_4 == 0)
        goto label_141ed17fa
    
label_141ed178b:
    void* rax_10 = (*(*result_4 + 0x148))(result_4)
    
    if (rax_10 == 0)
    label_141ed17d6:
        int64_t** rax_13 = sub_141ee1460(&result_1, result_4, arg1[3])
        sub_140cea340()
        
        if (sub_140cc1670(rax_13, &data_143e1b820) == 0)
            result = nullptr
        else
            result = *rax_13
    else
        int64_t** rax_11 = sub_141ee1460(&result_1, rax_10, arg1[3])
        sub_140cea340()
        
        if (sub_140cc1670(rax_11, &data_143e1b820) == 0)
            goto label_141ed17d6
        
        result = *rax_11
        
        if (result == 0)
            goto label_141ed17d6
else
    result_4 = *arg1
    
    if (result_4 != 0)
        void* rax_6 = sub_140bdf2e0()
        void* rdx_2 = result_4[2]
        int64_t rax_7 = sx.q(*(rax_6 + 0x38))
        
        if (rax_7.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30
                || result_4 == 0)
            goto label_141ed17fa
        
        goto label_141ed178b
    
label_141ed17fa:
    void* rbx_4 = *arg1
    
    if (rbx_4 == 0)
    label_141ed1865:
        char rax_20 = sub_140a237d0(sub_140b63b70(&arg1[3], &result_1), u"__DelegateSignature", 1)
        int64_t* result_2 = result_1
        
        if (result_2 != 0)
            sub_140a74f90(result_2)
        
        result = nullptr
        
        if (rax_20 != 0)
            result = nullptr
    else
        void* rax_15 = sub_140cddea0()
        void* rdx_5 = *(rbx_4 + 0x10)
        int64_t rax_16 = sx.q(*(rax_15 + 0x38))
        
        if (rax_16.d s<= *(rdx_5 + 0x38) && *(*(rdx_5 + 0x30) + (rax_16 << 3)) == rax_15 + 0x30)
            goto label_141ed1838
        
        void* rbx_5 = *arg1
        
        if (rbx_5 == 0)
            goto label_141ed1865
        
        rbx_4 = sub_140d21d80(rbx_5)
    label_141ed1838:
        
        if (rbx_4 == 0)
            goto label_141ed1865
        
        sub_140cea340()
        result = nullptr

char var_20_1 = 0
result_1 = result
sub_140cea340()

if (sub_140cc1670(&result_1, &data_143e1b820) != 0)
    int64_t* result_3 = result_1
    
    if (result_3 != 0)
        *(arg1 + 0x31) = (zx.q(result_3[8].d) u>> 0x1d).b & 1

return result
