// 函数: sub_142c87f90
// 地址: 0x142c87f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t arg_18 = 0
int64_t arg_20 = 0
void* rax
void* rdx
void* rbx_1
void* const r8
int32_t* r9

if (arg2 == 0)
    rax = arg1[0x3e]
    rbx_1 = rbx + 0x4ba0
    rdx = arg1[0x3f]
    r8 = 0x478
    r9 = 0x520
else
    rax = arg1[0x2d]
    rbx_1 = rbx + 0x4bb0
    rdx = arg1[0x2e]
    r8 = 0x460
    r9 = 0x540

*(rbx_1 + 0xc) = 0
void* rsi = r9 + arg1
int32_t r9_1 = *(r9 + arg1)
void* const rbp = &data_1434cce10
void* const r10 = &data_1434cce10
void* rdi = r8 + arg1

if (rax != 0)
    r10 = rax

void* const r11 = &data_1434cce10

if (rdx != 0)
    r11 = rdx

int32_t result

if (r9_1 == 2)
    int512_t zmm2_1
    result, zmm2_1 = sub_142c8c270(*arg1, r10, r11, rsi, arg4, arg3, &arg_18, &arg_20)
    
    if (result != 0)
        return result
    
    if (arg_18 != 0)
        data_143ccb8a0(*rdi)
        
        if (arg2 != 0)
            rbp = "Proxy-"
        
        int64_t rax_2 = sub_142c563e0("%sAuthorization: NTLM %s\r\n", rbp, zmm2_1)
        int64_t rcx_6 = arg_18
        *rdi = rax_2
        data_143ccb8a0(rcx_6)
        
        if (*rdi == 0)
            return 0x1b
        
        *rsi = 3
        *(rbx_1 + 0xc) = 1
else if (r9_1 == 3)
    *rsi = 4
label_142c880d3:
    data_143ccb8a0(*rdi)
    *rdi = 0
    *(rbx_1 + 0xc) = 1
else
    if (r9_1 == 4)
        goto label_142c880d3
    
    int512_t zmm2
    result, zmm2 = sub_142c8c110(r10, r11, rsi, &arg_18, arg3, &arg_20)
    
    if (result != 0)
        return result
    
    if (arg_18 != 0)
        data_143ccb8a0(*rdi)
        
        if (arg2 != 0)
            rbp = "Proxy-"
        
        int64_t rax_1 = sub_142c563e0("%sAuthorization: NTLM %s\r\n", rbp, zmm2)
        int64_t rcx_2 = arg_18
        *rdi = rax_1
        data_143ccb8a0(rcx_2)
        
        if (*rdi == 0)
            return 0x1b
return 0
