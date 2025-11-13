// 函数: sub_140946a30
// 地址: 0x140946a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t rdx = *(arg1 + 0x34)
int64_t rbp

if (rdx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_3 = (rbp + 1).d
    arg1[1].d = rax_3
    
    if (rax_3 s> *(arg1 + 0xc))
        sub_140775490(arg1)
    
    int32_t rdi_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rdi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_4 = *(rbx_1 + 0x10)
    
    if (rax_4 != 0)
        rbx_1 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(rbp * 0x118 + r9_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r8 * 0x118 + r9_1) = 0xffffffff

void* rax_11 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_11 != 0)
    r8_1 = rax_11

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
void* rdx_8 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_8 |= 1 << (rbp.b & 0x1f)
void*** rbx_3 = sx.q(rbp.d) * 0x118 + *arg1
void var_138
int64_t* rax_17 = sub_140949350(&var_138)
*rbx_3 = &data_142e25968
rbx_3[1] = *(arg3 + 8)
void* rcx_9 = *(arg3 + 0x10)
rbx_3[2] = rcx_9

if (rcx_9 != 0)
    *(rcx_9 + 8) += 1

TPI1::IteratePRECs::TPIMemMapCallback::CallBack::~CallBack(&rbx_3[3], rax_17)
sub_14094bf00(&var_138)
rbx_3[0x22].d = 0xffffffff
int32_t var_148
sub_14095c180(arg1, &var_148, arg2, rbx_3, rbp.d, nullptr)
int64_t result = *arg1 + sx.q(var_148) * 0x118 + 0x18
__security_check_cookie(rax_1 ^ &var_178)
return result
