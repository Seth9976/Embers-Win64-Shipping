// 函数: sub_14287f840
// 地址: 0x14287f840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xd0)
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t rax_2
int64_t rcx
int64_t* rbp

if (arg4 == 0)
    rbp = *(arg1 + 0x448)
    rax_2 = 0x1698
    rcx = 0x10
else
    rbp = *(arg1 + 0x478)
    rax_2 = 0x16a0
    rcx = 0x58

int64_t r12 = rcx + *(arg1 + 0xa8)
void* r13 = arg1 + rax_2
int32_t rax_4 = sub_1428916c0(sub_142891580(rbp))
int64_t result

if (rax_4 s< 0)
    result = 0
else
    int64_t r8 = sx.q(rax_4)
    uint64_t var_b0 = r8
    int64_t r15_2 = divu.dp.q(0x30, r8) * r8
    
    if (arg4 != 0)
    label_14287f9c2:
        int64_t* rax_17 = sub_142891ee0()
        
        if (rax_17 == 0)
            result = 0
        else
            char var_b8 = *(arg2 + 4)
            *arg3 = *(arg2 + 9)
            arg3[1] = *(arg2 + 8)
            
            if (sub_142891c70(rax_17, rbp) s<= 0)
                sub_142891ea0(rax_17)
                result = 0
            else if (sub_142891c10(rax_17, r12, var_b0) s<= 0)
                sub_142891ea0(rax_17)
                result = 0
            else if (sub_142891c10(rax_17, 
                    "666666666666666666666666666666666666666666666666\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"
            "\\\\\\\\ssl\record\ssl3_record.c", 
                    r15_2) s<= 0)
                sub_142891ea0(rax_17)
                result = 0
            else if (sub_142891c10(rax_17, r13, 8) s<= 0)
                sub_142891ea0(rax_17)
                result = 0
            else if (sub_142891c10(rax_17, &var_b8, 1) s<= 0)
                sub_142891ea0(rax_17)
                result = 0
            else if (sub_142891c10(rax_17, arg3, 2) s<= 0)
                sub_142891ea0(rax_17)
                result = 0
            else if (sub_142891c10(rax_17, *(arg2 + 0x28), *(arg2 + 8)) s<= 0)
                sub_142891ea0(rax_17)
                result = 0
            else if (sub_1428918e0(rax_17, arg3, nullptr) s<= 0)
                sub_142891ea0(rax_17)
                result = 0
            else if (sub_142891c70(rax_17, rbp) s<= 0)
                sub_142891ea0(rax_17)
                result = 0
            else if (sub_142891c10(rax_17, r12, var_b0) s<= 0)
                sub_142891ea0(rax_17)
                result = 0
            else if (sub_142891c10(rax_17, 
                    "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ssl\record\ssl3_record.c", 
                    r15_2) s<= 0)
                sub_142891ea0(rax_17)
                result = 0
            else
                void var_a8
                
                if (sub_142891c10(rax_17, arg3, var_b0) s<= 0)
                    sub_142891ea0(rax_17)
                    result = 0
                else if (sub_1428918e0(rax_17, arg3, &var_a8) s<= 0)
                    sub_142891ea0(rax_17)
                    result = 0
                else
                    sub_142891ea0(rax_17)
                    sub_14285d1e0(r13)
                    result = 1
    else
        if ((sub_142890eb0(sub_140687ad0(*(arg1 + 0x430))) & 0xf0007) != 2)
            goto label_14287f9c2
        
        if (sub_14288f580(rbp) == 0)
            goto label_14287f9c2
        
        uint64_t rdi_1 = var_b0
        void var_98
        memcpy(&var_98, r12, rdi_1.d)
        memcpy(&var_98 + rdi_1, 
            "666666666666666666666666666666666666666666666666\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"
        "\\\\ssl\record\ssl3_record.c", 
            r15_2.d)
        int64_t rdx_3 = *(arg2 + 8)
        int64_t rbx_1 = r15_2 + rdi_1
        *(&var_98 + rbx_1) = *r13
        void var_90
        *(&var_90 + rbx_1) = *(arg2 + 4)
        char var_c0_1 = 1
        void var_8f
        *(&var_8f + rbx_1) = (rdx_3 u>> 8).b
        int64_t rax_14 = *(arg2 + 0x10)
        int64_t rax_15 = *(arg2 + 0x28)
        char var_8e[0x46]
        var_8e[rbx_1] = rdx_3.b
        
        if (sub_14288eb20(rbp, arg3, &var_b0, &var_98, rax_15, rdx_3 + rdi_1, rax_14, r12, rdi_1, 
                var_c0_1) s> 0)
            sub_14285d1e0(r13)
            result = 1
        else
            result = 0

__security_check_cookie(rax_1 ^ &var_108)
return result
