// 函数: sub_142231830
// 地址: 0x142231830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void* rbx = *arg1
int32_t r8 = arg2.d
int32_t i = arg1[1].d
int32_t r9 = 0
int32_t r10 = arg_10:4.d

while (i s> 0)
    int32_t rcx_1 = i & 0x80000001
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(i)
    int32_t i_1 = (temp3_1 - temp2_1) s>> 1
    i = i_1
    int32_t rax_4 = i_1 + r9
    int64_t rcx_5 = sx.q(rax_4) * 2
    int32_t rax_5 = *(rbx + (rcx_5 << 3))
    int32_t rax_6 = rax_5 - r8
    
    if (rax_5 == r8)
        rax_6 = *(rbx + (rcx_5 << 3) + 4) - r10
    
    if (rax_6 s< 0)
        r9 = rax_4 + rcx_1

int64_t* rax_12

if (r9 s>= arg1[1].d)
    rax_12 = nullptr
else
    int64_t rcx_6 = sx.q(r9)
    int64_t rax_9 = rcx_6 << 4
    int32_t r8_1 = r8 - *(rax_9 + rbx)
    
    if (r8 == *(rax_9 + rbx))
        r8_1 = r10 - *(rax_9 + rbx + 4)
    
    if (r8_1 s< 0 || r9 == 0xffffffff)
        rax_12 = nullptr
    else
        int64_t rcx_7 = rcx_6 << 4
        
        if (rbx + 8 == neg.q(rcx_7))
            rax_12 = nullptr
        else
            rax_12 = *(rbx + 8 + rcx_7)

if (rax_12 != 0)
    return rax_12

int64_t* rax_13 = j_sub_140a82f30(zx.q((&rax_12[4]).d))

if (rax_13 != 0)
    rax_13[2] = 0
    rax_13[3].d = 0
    *(rax_13 + 0x1c) = 0
    *rax_13 = 0
    rax_13[1].d = 0xffffffff

int64_t* arg_8 = rax_13
sub_140625300(arg1, &arg_10, &arg_8)
return arg_8
