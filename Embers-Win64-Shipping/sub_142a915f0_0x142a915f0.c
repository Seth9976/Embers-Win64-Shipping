// 函数: sub_142a915f0
// 地址: 0x142a915f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t rdi = -1

do
    rdi += 1
while (arg1[rdi] != 0)

char* rcx = arg1
int64_t rbp
rbp.b = strchr(arg1, 0x2c) != 0
int64_t result

if (rbp.b != 0)
    char var_108 = 0
    char var_cc_1 = 0
    int32_t var_2c_1 = 0
    void var_138
    result = sub_142a91760(rcx, &var_108, &var_138, arg2)

if (rbp.b == 0 || *arg2 s<= 0)
    int64_t rax_3 = sub_142a91520(rcx)
    sub_142a91400()
    sub_142a860a0(&data_144015c00)
    data_144015bf8 = rax_3
    int64_t rbx_2 = sx.q(rdi.d)
    data_144015ba2 = rbp.b
    memcpy(&data_144015bb0, arg1, rbx_2.d)
    
    if (rbx_2 u>= 0x3d)
        __report_rangecheckfailure()
        noreturn
    
    (&data_144015bb0)[rbx_2] = 0
    data_144015bf0 = &data_144015bb0
    sub_142a7db20(0x10, sub_142a91940)
    sub_142a91400()
    result = sub_142a860d0(&data_144015c00)

__security_check_cookie(rax_1 ^ &var_158)
return result
