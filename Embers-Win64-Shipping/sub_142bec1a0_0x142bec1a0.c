// 函数: sub_142bec1a0
// 地址: 0x142bec1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40d0)
void var_40e8
int64_t rax_1 = __security_cookie ^ &var_40e8
int32_t r13 = *(arg1 + 0x114)
int32_t r12 = arg1[0x11].d
int32_t var_40c8 = 0
int64_t r9 = sx.q(r13 - r12)
int64_t var_40c0 = r9

if (r9 u> 0x55)
    uint64_t rcx_2 = (r9 + 0x54) u/ 0x55
    int64_t temp0_1 = divu.dp.q(0:(r9 - 1 + rcx_2), rcx_2)
    r9 = temp0_1
    var_40c0 = temp0_1

int64_t count = r9 << 3
uint64_t r8_1 = (count + 0x17) u/ 0x18
int64_t count_1 = count
void var_4028
*(arg1 + 0x128) = &var_4028
arg1[0x13].q = &var_4028 + r8_1 * 0x18
*(arg1 + 0x138) = 0x2aa - r8_1
int64_t result

while (r12 s< r13)
    arg1[0x11].d = r12
    int32_t var_40a8
    int32_t* i = &var_40a8
    r12 += r9.d
    int32_t var_40a4_1 = arg1[0x11].d
    int32_t rcx_6 = r13
    
    if (r12 s< r13)
        rcx_6 = r12
    
    *(arg1 + 0x114) = rcx_6
    var_40a8 = rcx_6
    
    do
        int32_t rsi_1 = *i
        void* i_1 = &i[1]
        int32_t rdi_1 = *i_1
        memset(*(arg1 + 0x128), 0, count)
        arg1[0x14].q = 0
        arg1[0x12].d = 1
        arg1[0x11].d = rdi_1
        *(arg1 + 0x114) = rsi_1
        int32_t rax_10 = sub_142bec3e0(arg1, var_40c8)
        var_40c8 = 1
        
        if (rax_10 != 0)
            int32_t rbp_3
            
            if (rax_10 == 0x40)
                rbp_3 = (rsi_1 - rdi_1) s>> 1
            
            if (rax_10 != 0x40 || rbp_3 == 0)
                result = 1
                goto label_142bec3c1
            
            i = i_1
            *(i_1 + 4) = rdi_1
            *i_1 = rdi_1 + rbp_3
        else
            sub_142becf60(arg1)
            i -= 4
        
        count = count_1
    while (i u>= &var_40a8)
    
    r9 = var_40c0
    count = r9 << 3

result = 0
label_142bec3c1:
__security_check_cookie(rax_1 ^ &var_40e8)
return result
