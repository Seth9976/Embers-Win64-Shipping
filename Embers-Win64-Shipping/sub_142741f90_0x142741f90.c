// 函数: sub_142741f90
// 地址: 0x142741f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg2[2]
int64_t* rsi_1

if (rsi == 0 || *rsi != 5)
    rsi_1 = nullptr
else
    rsi_1 = *(rsi + 8)
    
    if (rsi_1 == 0)
        rsi_1 = nullptr
    else
        void* rax_1 = sub_142748e90()
        void* rdx = rsi_1[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rsi_1 = nullptr

uint32_t rbp = zx.d(arg4)
void* rbx_2 = (zx.q(rbp) << 5) + rsi_1[0xcc]
*(rbx_2 + 0x10) = rbp
int512_t zmm1 = sub_140d3a3a0(rbx_2 + 0x14, rsi_1)
int32_t* rdi_2 = (zx.q(rbp) << 4) + rsi_1[0xdf]
*rdi_2 = 7
*(rdi_2 + 8) = rbx_2
int64_t rax_4 = *arg2
arg2[2] = rdi_2
*((*(rax_4 + 0x80))(arg2) + 0x10) = rdi_2
int64_t* rax_7 = (*(*arg2 + 0x80))(arg2)
int64_t r9 = *rax_7
(*(r9 + 0x50))(rax_7, 2, not.b(*(rsi_1 + 0x2b4) u>> 6) & 1, r9)
void* const rbx_3 = rsi_1[0x86]
void* rax_8
int64_t rax_9
void* rdx_2

if (rbx_3 != 0)
    rax_8 = sub_142749290()
    rdx_2 = *(rbx_3 + 0x10)
    rax_9 = sx.q(*(rax_8 + 0x38))

if (rbx_3 == 0 || rax_9.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
    rbx_3 = nullptr

int64_t* rcx_6 = *(rbx_3 + 0x418)
int32_t result = (*(*rcx_6 + 0x150))(rcx_6, zx.q(rbp))

if (result s< 0)
    return result

return sub_1427479f0(rsi_1, arg2, rbp.w, zmm1, arg3)
