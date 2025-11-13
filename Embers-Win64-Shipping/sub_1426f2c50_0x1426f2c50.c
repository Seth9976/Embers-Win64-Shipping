// 函数: sub_1426f2c50
// 地址: 0x1426f2c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426a6740(arg1, arg2)
wchar16* i_1 = nullptr
int64_t* rdx = &arg1[9]
*arg1 = &data_14347e1c8
arg1[5] = &data_14347e438
arg1[7] = 0
arg1[8] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0xd].d = 0xffffffff
*(arg1 + 0x6c) = 0
arg1[0xf] = 0
arg1[0x10].d = 0
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x13].d = 0x3e99999a
sub_140d3a3a0(arg1 + 0x9c, nullptr)
*(arg1 + 0xa4) = 0
void* rcx_1 = &arg1[0x18]
arg1[0x16] = 0
arg1[0x17] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x1c].d = 0xffffffff
*(arg1 + 0xe4) = 0
arg1[0x1e] = 0
arg1[0x1f].d = 0
arg1[0x20].d &= 0xfffffffc
__builtin_memset(&arg1[0x21], 0, 0x24)
arg1[0x26] = 0

for (wchar16* i = wcsstr(&UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay", ::"); i != 0; 
        i = wcsstr(&i[1], ::"))
    i_1 = i

int64_t arg_8
sub_140b58260(&arg_8, &i_1[2], 1)
int64_t rbx = arg_8
sub_140d3a3a0(arg1 + 0x9c, arg1)
*(arg1 + 0xa4) = rbx
int32_t rcx_5
rcx_5.b = sub_140b5b8a0(rbx.d, 0) == 0

if ((arg1[0x15].d != 0 | rcx_5.b) != 0)
    void* rax_3 = sub_140d3c6e0(arg1 + 0x9c)
    
    if (rax_3 != 0)
        sub_140d1fd20(rax_3, *(arg1 + 0xa4))

return arg1
