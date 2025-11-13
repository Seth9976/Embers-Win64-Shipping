// 函数: sub_1428e3b10
// 地址: 0x1428e3b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xd8)
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint64_t rbx = zx.q(arg3)
int32_t rax_2 = sub_1428a96d0(arg1)
int64_t result

if (rax_2 == 0)
label_1428e3d16:
    sub_1428a5670(6, 0x74, 0x79, "crypto\evp\evp_pbe.c", 0x5f)
    void var_a8
    char* rcx_11 = &var_a8
    
    if (arg1 != 0)
        sub_1428cddd0(rcx_11, 0x50, arg1)
    else
        sub_1428a7090(rcx_11, "NULL", zx.q((arg1 + 0x50).d))
    
    sub_1428a4880(2)
    result = 0
else
    int32_t* rcx = data_143feceb8
    int64_t rdi_1 = 0
    int32_t var_c8 = 0
    int32_t var_c4_1 = rax_2
    void* rax_4
    
    if (rcx != 0)
        int32_t rax_3 = sub_1428989f0(rcx, &var_c8)
        rax_4 = sub_142898ea0(data_143feceb8, rax_3)
    
    int32_t var_e8
    
    if (rcx == 0 || rax_4 == 0)
        var_e8.q = sub_1428e3ea0
        rax_4 = sub_1428a8f00(&var_c8, &data_143513a60, 0x1d, 0x18, var_e8)
        
        if (rax_4 == 0)
            goto label_1428e3d16
    
    int32_t rcx_3 = *(rax_4 + 8)
    int32_t r14_1 = *(rax_4 + 0xc)
    int64_t r15_1 = *(rax_4 + 0x10)
    
    if (arg2 == 0)
        rbx = 0
    else if (rbx.d == 0xffffffff)
        rbx = -1
        
        do
            rbx += 1
        while (*(rbx + arg2) != 0)
    
    int32_t rdx_2
    int64_t rsi_1
    
    if (rcx_3 != 0xffffffff)
        int64_t rax_8 = sub_14289b930(sub_1428a9620(rcx_3))
        rsi_1 = rax_8
        
        if (rax_8 != 0)
            goto label_1428e3c05
        
        rdx_2 = (rax_8 + 0x74).d
        sub_1428a5670((rax_8 + 6).d, rdx_2, rdx_2 + 0x2c, "crypto\evp\evp_pbe.c", 0x72)
        result = 0
    else
        rsi_1 = 0
    label_1428e3c05:
        int64_t rax_6
        
        if (r14_1 != 0xffffffff)
            rax_6 = sub_14289b970(sub_1428a9620(r14_1))
            rdi_1 = rax_6
        
        if (r14_1 == 0xffffffff || rax_6 != 0)
            var_e8.q = rsi_1
            int32_t rax_10 = r15_1(arg5, arg2, zx.q(rbx.d), arg4, var_e8, rdi_1, arg6)
            
            if (rax_10 != 0)
                result = 1
            else
                sub_1428a5670(rax_10 + 6, rax_10 + 0x74, rax_10 + 0x78, "crypto\evp\evp_pbe.c", 
                    0x82)
                result = 0
        else
            rdx_2 = (rax_6 + 0x74).d
            sub_1428a5670((rax_6 + 6).d, rdx_2, rdx_2 + 0x2d, "crypto\evp\evp_pbe.c", 0x7c)
            result = 0

__security_check_cookie(rax_1 ^ &var_108)
return result
