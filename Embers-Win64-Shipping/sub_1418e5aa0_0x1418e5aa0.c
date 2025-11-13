// 函数: sub_1418e5aa0
// 地址: 0x1418e5aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5f8
int64_t rax_1 = __security_cookie ^ &var_5f8
void* rbp = *(arg1 + 0x240)

if (*(rbp + 0x78) != 0)
    sub_1418c86c0(rbp, 0, 0)

void* rbp_1 = *(rbp + 0x70)

if (*(arg1 + 0x410) != 0)
    sub_1418bdeb0(rbp_1)
    *(arg1 + 0x410) = 0

*(arg1 + 0x408) = 0

if (data_143efb2f8 != 0)
    sub_1418c8030(*(arg1 + 0x240), nullptr)
    sub_1418c2ee0(*(arg1 + 0x240))
label_1418e5b51:
    void* rbp_2 = *(arg1 + 0x240)
    
    if (*(rbp_2 + 0x78) != 0)
        sub_1418c86c0(rbp_2, 0, 0)
    
    rbp_1 = *(rbp_2 + 0x70)
else if (*(arg1 + 0x150) != 0)
    sub_1418c21f0(arg1)
    *(arg1 + 0x150) = 0
    goto label_1418e5b51

sub_1418d39c0(arg1 + 8, arg2)
int32_t rbx = data_14399f63c
wchar16 const* const rdi = u"<unnamed RenderPass>"

if (arg3 != 0)
    rdi = arg3

if (*(arg1 + 0x471) != 0)
    void* r14_1 = *(arg1 + 0x240)
    int64_t r12_1 = *(*(arg1 + 0x140) + 0x1580)
    
    if (*(r14_1 + 0x78) != 0)
        sub_1418c86c0(r14_1, 0, 0)
    
    sub_1418fe5a0(arg1 + 0x468, *(*(r14_1 + 0x70) + 0x40), r12_1, rdi)

if (*(arg1 + 0x138) == 0)
    (*(*(arg1 + 0x468) + 0x10))(arg1 + 0x468, rdi, zx.q(rbx))

if (*(arg2 + 0x114) != 0)
    void*** rax_4 = sub_1418d8e20(*(arg1 + 0x140), arg2[0x22].d)
    *(arg1 + 0x448) = rax_4
    int32_t rbx_1 = data_14399fa54
    memset(rax_4[0xb], 0, sx.q(*(rax_4 + 0x64)) << 3)
    rax_4[8].d = 0
    rax_4[0xf].d = rbx_1
    data_143efb7e0(*(rax_4[1] + 8), rax_4[3])
    data_143efba78(*(rbp_1 + 0x40), rax_4[2], 0, zx.q(rax_4[4].d))
    
    if (*(rax_4[1] + 0x157c) == 0x1002)
        int64_t rcx_15 = *(rbp_1 + 0x40)
        int64_t var_5b0_1 = 0
        int32_t var_5b8_1 = 0
        int64_t var_59c_1 = 0
        int64_t var_5c0_1 = 0
        int64_t var_5a4_1 = 0
        int64_t var_5c8
        var_5c8.d = 0
        int32_t var_5a8
        int32_t* var_5d0_1 = &var_5a8
        var_59c_1 = 0x1000
        int64_t var_5d8
        var_5d8.d = 1
        var_5a8 = 0x2e
        int32_t var_594_1 = 0x2000
        data_143efba60(rcx_15, 0x1000, 0x4000, 0, var_5d8, var_5d0_1, var_5c8, var_5c0_1, 
            var_5b8_1, var_5b0_1, var_5a8)
    
    data_143efba48(*(rbp_1 + 0x40), rax_4[3], 0x2000)
    rax_4[7].d = 1

void var_3d8
$I10_OUTPUT(&var_3d8, *(arg1 + 0x140), arg2)
int64_t* rax_6 = sub_1418e2530(arg1 + 0x248, *(arg1 + 0x140), &var_3d8)
void var_588
sub_1405d1370(&var_588)
sub_1419686f0(arg2, &var_588)
int64_t* rax_7 = sub_1418e21c0(arg1 + 0x248, *(arg1 + 0x140), &var_588, &var_3d8, rax_6)
int64_t result =
    sub_1418d9e90(arg1 + 0x248, arg1, *(arg1 + 0x140), rbp_1, arg2, &var_3d8, rax_6, rax_7)
__security_check_cookie(rax_1 ^ &var_5f8)
return result
