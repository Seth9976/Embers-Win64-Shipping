// 函数: sub_1419a8180
// 地址: 0x1419a8180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax = rbx_2 + 0xb6

if (rax u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0xb8)
    rbx_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax = rbx_2 + 0xb6

wchar16 const* const rcx_1 =
    !!!Unavailable RDG event name: need RDG_EVENTS>=0 and r.RDG.EmitWarnings=1 or -rdgdebug!!!"
*(arg1 + 0x30) = rax
wchar16 const i

do
    i = *rcx_1
    *(rbx_2 -
        !!!Unavailable RDG event name: need RDG_EVENTS>=0 and r.RDG.EmitWarnings=1 or -rdgdebug!!!"
        + rcx_1) = i
    rcx_1 = &rcx_1[1]
while (i != 0)
void*** rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_1 = &rcx_4[4]

if (rax_1 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &rcx_4[4]

*(arg1 + 0x30) = rax_1
int64_t* rax_2 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_2 = rcx_4
*(arg1 + 8) = &rcx_4[1]
rcx_4[1] = 0
rcx_4[2] = rbx_2
*rcx_4 = &data_143009c20
rcx_4[3].d = 0
return &data_143009c20
