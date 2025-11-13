// 函数: sub_1428a43e0
// 地址: 0x1428a43e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
char* rax_2 = strrchr(arg2, 0x2e)
int32_t rsi_1

if (rax_2 == 0)
    int64_t rax_3 = -1
    
    do
        rax_3 += 1
    while (arg2[rax_3] != 0)
    
    rsi_1 = rax_3.d
else
    rsi_1 = rax_2.d - arg2.d

int32_t r14 = 0
int32_t rbx = 0
int64_t* rsi_2

if (sub_142898c70(data_143feb118) s> 0)
    int32_t rax_7
    
    do
        int64_t* rax_5 = sub_142898ea0(data_143feb118, rbx)
        rsi_2 = rax_5
        
        if (strncmp(rax_5[1], arg2, sx.q(rsi_1)) == 0)
            goto label_1428a45d9
        
        rbx += 1
        rax_7 = sub_142898c70(data_143feb118)
    while (rbx s< rax_7)

if ((arg4 & 8) != 0)
    goto label_1428a4579

char* rax_8 = sub_1428f3650(arg1, arg3, "path")
char* rbx_1 = rax_8

if (rax_8 == 0)
    sub_1428a49e0()
    rbx_1 = arg2

int64_t* rax_9 = sub_1428f3ac0(nullptr, rbx_1, 0, 0)
uint64_t result

if (rax_9 != 0)
    int64_t rax_10 = sub_1428f37d0(rax_9, "OPENSSL_init")
    
    if (rax_10 == 0)
        r14 = (rax_10 + 0x70).d
        goto label_1428a4531
    
    int64_t* rax_12 = sub_1428a42c0(rax_9, arg2, rax_10, sub_1428f37d0(rax_9, "OPENSSL_finish"))
    rsi_2 = rax_12
    
    if (rax_12 == 0)
        goto label_1428a4531
    
label_1428a45d9:
    int32_t result_1 = 1
    void** rax_13 = sub_1428a6730(0x28)
    
    if (rax_13 == 0)
        goto label_1428a46a5
    
    *rax_13 = rsi_2
    rax_13[1] = sub_1428a6ba0(arg2)
    int64_t rax_15 = sub_1428a6ba0(arg3)
    rax_13[2] = rax_15
    rax_13[4] = 0
    
    if (rax_13[1] == 0 || rax_15 == 0)
    label_1428a46bb:
        
        if (rax_13 != 0)
            sub_1428a6780(rax_13[1])
            sub_1428a6780(rax_13[2])
            sub_1428a6780(rax_13)
        
        result_1 = -1
    label_1428a4703:
        
        if ((arg4 & 4) == 0)
            sub_1428a5670(0xe, 0x76, 0x6d, "crypto\conf\conf_mod.c", 0xae)
            void var_58
            sub_1428b7080(&var_58, 0xd, "%-8d", zx.q(result_1))
            void* var_68_1 = &var_58
            char const* const var_70_1 = ", retcode="
            int32_t var_78_4
            var_78_4.q = arg3
            sub_1428a4880(6)
    else
        int64_t rax_16 = rsi_2[2]
        int32_t result_2
        
        if (rax_16 != 0)
            result_2 = rax_16(rax_13, arg1)
            result_1 = result_2
            r14 = 1
        
        if (rax_16 != 0 && result_2 s<= 0)
            goto label_1428a46a5
        
        int32_t* rax_17 = data_143feb120
        int32_t var_78_3
        
        if (rax_17 == 0)
            rax_17 = sub_142898ba0()
            data_143feb120 = rax_17
            
            if (rax_17 != 0)
                goto label_1428a4785
            
            var_78_3 = 0x13f
        label_1428a46a0:
            sub_1428a5670(0xe, 0x73, 0x41, "crypto\conf\conf_mod.c", var_78_3)
        label_1428a46a5:
            int64_t rax_18 = rsi_2[3]
            
            if (rax_18 != 0 && r14 != 0)
                rax_18(rax_13)
            
            goto label_1428a46bb
        
    label_1428a4785:
        
        if (sub_142898d50(rax_17, rax_13) == 0)
            var_78_3 = 0x145
            goto label_1428a46a0
        
        rsi_2[4].d += 1
        
        if (result_1 s<= 0)
            goto label_1428a4703
    
    result = zx.q(result_1)
else
    r14 = (rax_9 + 0x6e).d
label_1428a4531:
    sub_1428f39b0(rax_9)
    sub_1428a5670(0xe, 0x75, r14, "crypto\conf\conf_mod.c", 0xdd)
    int32_t var_78_1
    var_78_1.q = rbx_1
    sub_1428a4880(4)
label_1428a4579:
    
    if ((arg4 & 4) == 0)
        sub_1428a5670(0xe, 0x76, 0x71, "crypto\conf\conf_mod.c", 0xa2)
        sub_1428a4880(2)
    
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_98)
return result
