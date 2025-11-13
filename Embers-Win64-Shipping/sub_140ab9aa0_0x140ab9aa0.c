// 函数: sub_140ab9aa0
// 地址: 0x140ab9aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *(arg1 + 0x1b0)
int64_t r11 = arg3[1]
uint64_t rbx = zx.q(arg2)
int64_t rdi_1 = r14 * rbx
uint64_t r10 = zx.q(arg2)
uint64_t var_30 = r10
int64_t* rbx_9

if (*(arg1 + 0xb8) == *(arg1 + 0xe4))
labelid_1c:
    rbx_9 = nullptr
else
    void* rdx = *(arg1 + 0xf0)
    void* r8 = arg1 + 0xe8
    int32_t rcx_3 = ((r11 u>> 0x20).d * 0x17 - rbx.d + r11.d) ^ rbx.d u>> 0xd
    int32_t r9_3 = (0x9e3779b9 - rcx_3 - rbx.d) ^ rcx_3 << 8
    int32_t rbx_3 = (rbx.d - r9_3 - rcx_3) ^ r9_3 u>> 0xd
    int32_t rcx_6 = (rcx_3 - r9_3 - rbx_3) ^ rbx_3 u>> 0xc
    int32_t r9_6 = (r9_3 - rcx_6 - rbx_3) ^ rcx_6 << 0x10
    int32_t rbx_6 = (rbx_3 - r9_6 - rcx_6) ^ r9_6 u>> 5
    int32_t rcx_9 = (rcx_6 - r9_6 - rbx_6) ^ rbx_6 u>> 3
    int32_t r9_9 = (r9_6 - rcx_9 - rbx_6) ^ rcx_9 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_23 = *(r8
        + (((sx.q(rbx_6 - r9_9 - rcx_9) ^ zx.q(r9_9) u>> 0xf) & (sx.q(*(arg1 + 0xf8)) - 1)) << 2))
    
    if (rax_23 == 0xffffffff)
    label_140ab9bcf:
        rbx_9 = nullptr
    else
        void* r8_1 = *(arg1 + 0xb0)
        int64_t rcx_14
        
        while (true)
            rcx_14 = sx.q(rax_23) << 5
            int64_t* rdx_1 = r8_1 + rcx_14
            
            if (*(r8_1 + rcx_14 + 8) == r10 && *rdx_1 == r11)
                break
            
            rax_23 = rdx_1[3].d
            
            if (rax_23 == 0xffffffff)
                goto label_140ab9bcf_2
        
        if (rax_23 == 0xffffffff)
        label_140ab9bcf_1:
            rbx_9 = nullptr
        else
            void* rbx_12 = r8_1 + rcx_14
            
            if (rbx_12 == 0)
            label_140ab9bcf_2:
                rbx_9 = nullptr
            else
                rbx_9 = *(rbx_12 + 0x10)

if (rbx_9 == 0)
    int64_t rbx_10 = r14 + rdi_1
    
    if (arg3[4] u<= rbx_10)
        rbx_10 = arg3[4]
    
    void* rax_24 = j_sub_140a82f30(0x58)
    int64_t* rax_25
    
    if (rax_24 == 0)
        rax_25 = nullptr
    else
        memset(rax_24, 0, 0x58)
        rax_25 = sub_140a95630(rax_24)
    
    int64_t* arg_8 = rax_25
    *(rax_25 + 0x18) = r11.o
    rax_25[0xa].b = 0
    rax_25[7] = rdi_1
    rax_25[6] = rbx_10 - rdi_1
    sub_140a915e0(arg1 + 0xb0, &rax_25[3], &arg_8)
    rbx_9 = arg_8
    sub_140a4df30(arg1, rbx_9)

void* rcx_19 = rbx_9[1]

if (rcx_19 != 0)
    *(rcx_19 + 0x10) = rbx_9[2]
    *(rbx_9[2] + 8) = rbx_9[1]

rbx_9[2] = *(arg1 + 0x110)
rbx_9[1] = arg1 + 0x100
*(*(arg1 + 0x110) + 8) = rbx_9
int64_t rax_31 = *(arg1 + 0x1b0)
*(arg1 + 0x110) = rbx_9
int64_t rcx_21 = arg3[2]
int64_t r14_3 = rcx_21 - rdi_1

if (r14_3 s<= 0)
    r14_3 = 0

int64_t rsi_3 = arg3[3] - rdi_1 + rcx_21
int64_t rdi_2 = rdi_1 - rcx_21

if (rdi_2 s<= 0)
    rdi_2 = 0

if (rax_31 u<= rsi_3)
    rsi_3 = rax_31

uint32_t count = rsi_3.d - r14_3.d

if (rbx_9[0xa].b != 0)
    return memcpy(**(*arg3 + 0x148) + rdi_2, *rbx_9[5] + r14_3, count)

void* rax_34 = *arg3
*(rax_34 + 0x150) += 1
int64_t rbp_1 = sx.q(rbx_9[9].d)
int32_t rax_35 = (rbp_1 + 1).d
rbx_9[9].d = rax_35

if (rax_35 s> *(rbx_9 + 0x4c))
    sub_1405c4e40(&rbx_9[8])

int64_t* rcx_28 = (rbp_1 << 5) + rbx_9[8]
*rcx_28 = 0
*rcx_28 = *arg3
uint64_t result = zx.q(count)
rcx_28[3] = result
rcx_28[1] = rdi_2
rcx_28[2] = r14_3
return result
