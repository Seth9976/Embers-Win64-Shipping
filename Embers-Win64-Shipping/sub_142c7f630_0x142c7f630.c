// 函数: sub_142c7f630
// 地址: 0x142c7f630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* rbx = *arg1
int32_t result_1 = 0
void* r14 = *(rbx + 0x250)
int64_t r8

if (arg2 != 0xd5)
    if (arg2 == 0x226)
        r8, arg4 = sub_142c64760(rbx, "Given file does not exist", arg3, arg4)
        result_1 = 0x13
    else
        r8, arg4 = sub_142c64850(rbx, "unsupported MDTM reply format\n", arg3, arg4)
    
    goto label_142c7f833

int32_t var_f8
int32_t* var_110_1 = &var_f8
int32_t var_f4
int32_t* var_118_1 = &var_f4
int32_t var_f0
int32_t* var_120_1 = &var_f0
int32_t var_ec
int32_t* var_128_1 = &var_ec
int32_t var_e4
int32_t rax_2
rax_2, r8 = sub_1425f29b0(*(rbx + 0xa80) + 4, "%04d%02d%02d%02d%02d%02d", &var_e4)
int32_t var_d8

if (rax_2 == 6)
    __time64_t var_e0_1 = _time64(nullptr)
    int32_t var_108_1 = var_f8
    var_110_1.d = var_f4
    var_118_1.d = var_f0
    var_120_1.d = var_ec
    int32_t var_e8
    var_128_1.d = var_e8
    arg4 = sub_142c564b0(&var_d8, 0x18, "%04d%02d%02d %02d:%02d:%02d GMT", zx.q(var_e4), arg4)
    int32_t rax_9
    rax_9, r8 = sub_142c705f0(&var_d8)
    *(rbx + 0x4efc) = rax_9

int32_t result

if (*(rbx + 0x5e8) == 0 || arg1[0xe4] == 0 || *(rbx + 0x5d9) == 0)
label_142c7f833:
    int32_t rdx_2 = *(rbx + 0x428)
    
    if (rdx_2 == 0)
        goto label_142c7f8a9
    
    int64_t rax_17 = sx.q(*(rbx + 0x4efc))
    int64_t rcx_10
    
    if (rax_17.d s> 0)
        rcx_10 = *(rbx + 0x430)
    
    if (rax_17.d s<= 0 || rcx_10 s<= 0)
        sub_142c64850(rbx, "Skipping time comparison\n", r8, arg4)
    label_142c7f8a9:
        
        if (result_1 == 0)
            result_1 = sub_142c80750(arg1)
        
        result = result_1
    else
        char* rdx_3
        
        if (rdx_2 == 2)
            if (rax_17 s<= rcx_10)
                goto label_142c7f8a9
            
            rdx_3 = "The requested document is not old enough\n"
        else
            if (rax_17 s> rcx_10)
                goto label_142c7f8a9
            
            rdx_3 = "The requested document is not new enough\n"
        
        sub_142c64850(rbx, rdx_3, r8, arg4)
        *(r14 + 0x18) = 2
        result = 0
        *(rbx + 0x4f00) = 1
        arg1[0xea].d = 0
else
    int64_t rax_10 = sx.q(*(rbx + 0x4efc))
    
    if (rax_10.d s< 0)
        goto label_142c7f833
    
    result = sub_142c705a0(rax_10, &var_d8)
    
    if (result == 0)
        int32_t var_c0
        int32_t r8_2 = var_c0 - 1
        
        if (var_c0 == 0)
            r8_2 = 6
        
        int32_t var_100_1 = var_d8
        int32_t var_d4
        int32_t var_108_2 = var_d4
        int32_t var_d0
        var_110_1.d = var_d0
        int32_t var_c4
        var_118_1.d = var_c4 + 0x76c
        int32_t var_c8
        int64_t var_120_2 = (&data_1436b5320)[sx.q(var_c8)]
        int32_t var_cc
        var_128_1.d = var_cc
        char var_a8[0x60]
        result, r8, arg4 = sub_142c645e0(arg1, 3, &var_a8, 0, 
            sub_142c564b0(&var_a8, 0x80, "Last-Modified: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n", 
                (&data_1436b52b0)[sx.q(r8_2)], arg4))
        result_1 = result
        
        if (result == 0)
            goto label_142c7f833

__security_check_cookie(rax_1 ^ &var_148)
return result
