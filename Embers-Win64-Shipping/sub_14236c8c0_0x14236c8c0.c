// 函数: sub_14236c8c0
// 地址: 0x14236c8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg2 + 0xc0)
int64_t rax = sub_141e5f950(arg2 + 0xb0, arg1)
int64_t arg_18 = rax
int64_t r10 = rax
void* const rcx_6

if (*(r15 + 0x668) == *(r15 + 0x694))
labelid_12:
    rcx_6 = nullptr
else
    void* r8_1 = *(r15 + 0x6a0)
    void* r9_1 = r15 + 0x698
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rax_3 =
        *(r9_1 + ((sx.q((rax u>> 0x20).d * 0x17 + r10.d) & (sx.q(*(r15 + 0x6a8)) - 1)) << 2))
    
    if (rax_3 == 0xffffffff)
    label_14236c961:
        rcx_6 = nullptr
    else
        int64_t r8_2 = *(r15 + 0x660)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_3) * 3
            rcx_6 = r8_2 + (rdx_3 << 3)
            
            if (*(r8_2 + (rdx_3 << 3)) == r10)
                break
            
            rax_3 = *(rcx_6 + 0x10)
            
            if (rax_3 == 0xffffffff)
                goto label_14236c961_1
        
        if (rax_3 == 0xffffffff)
        label_14236c961_1:
            rcx_6 = nullptr

void* rax_4 = rcx_6 + 8

if (rcx_6 == 0)
    rax_4 = nullptr

int64_t rax_8
int64_t rcx_9
int32_t rdx_7
int32_t r8_4

if (rax_4 != 0)
    rax_8 = sx.q(*rax_4)
    rcx_9 = *(r15 + 0x6b0)
    rdx_7 = (rax_8 + 4).d
    r8_4 = *(rax_8 + rcx_9)
else
    int64_t rdi_1 = sx.q(*(r15 + 0x6b8))
    int32_t rax_5 = (rdi_1 + 8).d
    *(r15 + 0x6b8) = rax_5
    
    if (rax_5 s> *(r15 + 0x6bc))
        sub_1405daba0(r15 + 0x6b0)
    
    int32_t arg_10 = rdi_1.d
    *(rdi_1 + *(r15 + 0x6b0)) = 0
    sub_141cf16a0(r15 + 0x660, &arg_18, &arg_10)
    int64_t rdx_6 = sx.q(arg_10)
    r8_4 = 1
    r10 = arg_18
    *(rdx_6 + *(r15 + 0x6b0)) = 1
    rdx_7 = rdx_6.d + 4
    rcx_9 = *(r15 + 0x6b0)

int32_t* r9_3 = sx.q(rdx_7) + rcx_9

if (r8_4 == 0)
    if ((*(arg1 + 0x4c) & 1) == 0)
        *r9_3 += 1
    
    if ((*(arg1 + 0x4c) & 1) != 0 || *r9_3 s< *(arg1 + 0x48))
        sub_142373dd0(arg1, r10, r15)
        *(arg2 + 0x100) &= 0xfffffff3
        void** rax_9
        rax_9.b = 1
        return rax_9

rax_8.b = 0
return rax_8
