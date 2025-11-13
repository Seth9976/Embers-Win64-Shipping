// 函数: sub_1407cc8a0
// 地址: 0x1407cc8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 0x28)
*(arg1 + 0x34) ^= 1
void* rbx = rax
int32_t rdx = *(arg1 + 0x38)
*(arg1 + 0x30) = arg2.d

if (rdx s> 0)
    sub_1407cd1b0(arg1)

int64_t r8 = sx.q(*(arg1 + 0x34))
int64_t rdx_2 = r8 << 4
int64_t rcx_4 = (r8 ^ 1) << 4

if (*(rcx_4 + arg1 + 0x48) != *(rdx_2 + arg1 + 0x48) || *(arg1 + 0x90) != 0)
    sub_140780a30(rcx_4 + 0x40 + arg1, rdx_2 + 0x40 + arg1)
    r8 = zx.q(*(arg1 + 0x34))

int64_t rdx_5 = sx.q(r8.d)
int64_t rdx_6 = rdx_5 << 4
int64_t rcx_9 = (rdx_5 ^ 1) << 4

if (*(rcx_9 + arg1 + 0x68) != *(rdx_6 + arg1 + 0x68) || *(arg1 + 0x90) != 0)
    sub_140780b40(rcx_9 + 0x60 + arg1, rdx_6 + 0x60 + arg1)

int32_t rax_2

if (arg3 == 0)
    *(arg1 + 0x90) = 0
    rax_2.b = 1
    return rax_2

int32_t i = 0

if (*(arg1 + 0x88) s<= 0)
    *(arg1 + 0x90) = 0
    rax_2.b = 1
    return rax_2

int64_t** r12 = nullptr
int32_t* r15 = nullptr

do
    if (*(r15 + *(arg1 + 0x80)) s> 0)
        void* rax_5 = *(rbx + 0x430)
        int64_t i_1
        
        if (rax_5 == 0)
            i_1 = sx.q(i)
        else
            int64_t* rsi_1 = *(r12 + **(rax_5 + 0x58))
            void* rax_7 = sub_141f66050(rbx, i)
            int64_t rcx_15 = sx.q(*(arg1 + 0x34)) << 4
            i_1 = sx.q(i)
            void* rbx_1 = i_1 * 0x38
            sub_14230b740(rax, rbx_1 + rcx_15 + *(arg1 + 0x80) + 8, arg1 + 0x40 + rcx_15, rsi_1, 
                rax_7)
            rbx = rax
            sub_14230bca0(rbx, *(arg1 + 0x80) + 0x28 + rbx_1, 
                ((sx.q(*(arg1 + 0x34)) + 4) << 4) + arg1, rsi_1, rax_7)
        
        int64_t rdx_15 = sx.q(*(arg1 + 0x34))
        void* r9_3 = *(arg1 + 0x80)
        int64_t rdx_16 = rdx_15 * 2
        int64_t r8_9 = (rdx_15 ^ 1) * 2
        
        if (*(&r15[r8_9 * 2] + r9_3 + 0x10) != *(&r15[rdx_16 * 2] + r9_3 + 0x10))
            int64_t rcx_21 = i_1 * 0x38
            sub_140780bc0(r9_3 + 8 + rcx_21 + (r8_9 << 3), r9_3 + 8 + rcx_21 + (rdx_16 << 3))
    
    i += 1
    r12 = &r12[1]
    r15 = &r15[0xe]
while (i s< *(arg1 + 0x88))

int32_t rax_4
rax_4.b = 1
*(arg1 + 0x90) = 0
return rax_4
