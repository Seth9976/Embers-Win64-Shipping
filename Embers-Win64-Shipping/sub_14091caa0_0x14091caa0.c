// 函数: sub_14091caa0
// 地址: 0x14091caa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t rax_2
int32_t rcx

if (*(arg1 + 0x14) == 0)
    rax_2 = sx.q(arg1[2].d)
    rcx = (rax_2 + 1).d

if (*(arg1 + 0x14) != 0 || rcx u> arg1[1].d)
    *(arg1 + 0x14) = 1
else
    arg1[2].d = rcx
    *(rax_2 + *arg1) = *arg2

int32_t var_d0
int16_t* var_c8

switch (*arg2 - 1)
    case 0
        sub_1409401f0(arg2, &var_d0)
        
        if (*(arg1 + 0x14) != 0)
            *(arg1 + 0x14) = 1
        else
            int64_t rcx_8 = sx.q(arg1[2].d)
            
            if ((rcx_8 + 4).d u> arg1[1].d)
                *(arg1 + 0x14) = 1
            else
                *(rcx_8 + *arg1) = (var_d0 u>> 0x18).b
                *(sx.q(arg1[2].d) + *arg1 + 1) = (var_d0 u>> 0x10).b
                *(sx.q(arg1[2].d) + *arg1 + 2) = (var_d0 u>> 8).b
                *(sx.q(arg1[2].d) + *arg1 + 3) = var_d0.b
                arg1[2].d += 4
    case 2
        sub_1409403c0(arg2, &var_d0)
        sub_14091ce50(arg1, &var_d0)
    case 4
        sub_140940230(arg2, &var_d0)
        var_c8 = var_d0.q
        sub_14091ce50(arg1, &var_c8)
    case 5
        var_c8 = nullptr
        int32_t var_c0_2 = 0
        sub_1409402e0(arg2, &var_c8)
        int16_t* const rdx_31 = &data_142d40450
        
        if (var_c0_2 != 0)
            rdx_31 = var_c8
        
        void var_b8
        sub_140685ed0(&var_b8, rdx_31)
        
        if (*(arg1 + 0x14) != 0)
            *(arg1 + 0x14) = 1
        else
            int64_t rcx_25 = sx.q(arg1[2].d)
            
            if ((rcx_25 + 4).d u> arg1[1].d)
                *(arg1 + 0x14) = 1
            else
                uint32_t count
                *(rcx_25 + *arg1) = (count u>> 0x18).b
                *(sx.q(arg1[2].d) + *arg1 + 1) = (count u>> 0x10).b
                *(sx.q(arg1[2].d) + *arg1 + 2) = (count u>> 8).b
                *(sx.q(arg1[2].d) + *arg1 + 3) = count.b
                arg1[2].d += 4
                int64_t rcx_29 = sx.q(arg1[2].d)
                
                if (*(arg1 + 0x14) != 0 || count + rcx_29.d u> arg1[1].d)
                    *(arg1 + 0x14) = 1
                else if (count s> 0)
                    int64_t var_30
                    memcpy(rcx_29 + *arg1, var_30, count)
                    arg1[2].d += count
        
        int64_t var_38
        
        if (var_38 != 0)
            sub_140a74f90(var_38)
        
        goto label_14091cdaf
    case 6
        sub_140940210(arg2, &var_d0)
        int32_t r8_1 = var_d0
        
        if (*(arg1 + 0x14) != 0)
            *(arg1 + 0x14) = 1
        else
            int64_t rcx_3 = sx.q(arg1[2].d)
            
            if ((rcx_3 + 4).d u> arg1[1].d)
                *(arg1 + 0x14) = 1
            else
                *(rcx_3 + *arg1) = (r8_1 u>> 0x18).b
                *(sx.q(arg1[2].d) + *arg1 + 1) = (r8_1 u>> 0x10).b
                *(sx.q(arg1[2].d) + *arg1 + 2) = (r8_1 u>> 8).b
                *(sx.q(arg1[2].d) + *arg1 + 3) = r8_1.b
                arg1[2].d += 4
    case 7
        int32_t rdi_1 = 0
        var_c8 = nullptr
        int32_t var_c0_1 = 0
        sub_140940250(arg2, &var_c8)
        int32_t r8_2 = var_c0_1
        int64_t rcx_17
        
        if (*(arg1 + 0x14) == 0)
            rcx_17 = sx.q(arg1[2].d)
        
        if (*(arg1 + 0x14) != 0 || (rcx_17 + 4).d u> arg1[1].d)
            *(arg1 + 0x14) = 1
        else
            *(rcx_17 + *arg1) = (r8_2 u>> 0x18).b
            *(sx.q(arg1[2].d) + *arg1 + 1) = (r8_2 u>> 0x10).b
            *(sx.q(arg1[2].d) + *arg1 + 2) = (r8_2 u>> 8).b
            *(sx.q(arg1[2].d) + *arg1 + 3) = r8_2.b
            arg1[2].d += 4
            r8_2 = var_c0_1
        
        if (r8_2 s> 0)
            int64_t r9_1 = 0
            
            do
                int64_t rax_23
                int32_t rcx_21
                
                if (*(arg1 + 0x14) == 0)
                    rax_23 = sx.q(arg1[2].d)
                    rcx_21 = (rax_23 + 1).d
                
                if (*(arg1 + 0x14) != 0 || rcx_21 u> arg1[1].d)
                    *(arg1 + 0x14) = 1
                else
                    arg1[2].d = rcx_21
                    *(rax_23 + *arg1) = *(var_c8 + r9_1)
                    r8_2 = var_c0_1
                
                rdi_1 += 1
                r9_1 += 1
            while (rdi_1 s< r8_2)
        
    label_14091cdaf:
        int16_t* rcx_32 = var_c8
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
    case 8
        char var_d8
        sub_1409403e0(arg2, &var_d8)
        
        if (*(arg1 + 0x14) != 0)
            *(arg1 + 0x14) = 1
        else
            int64_t rax_31 = sx.q(arg1[2].d)
            int32_t rcx_34 = (rax_31 + 1).d
            
            if (rcx_34 u> arg1[1].d)
                *(arg1 + 0x14) = 1
            else
                arg1[2].d = rcx_34
                char* rdx_39
                rdx_39.b = var_d8 != 0
                rax_31[*arg1] = rdx_39.b

__security_check_cookie(rax_1 ^ &var_f8)
return arg1
