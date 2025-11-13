// 函数: sub_1427430c0
// 地址: 0x1427430c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f509d0(arg1, arg2)
*arg1 = &data_143498440
arg1[5] = &data_143498dc0
arg1[0x3e] = &data_143498df0
arg1[0xc7] = &data_143498e48
arg1[0xc9] = 0
arg1[0xca] = 0
__builtin_memset(&arg1[0xcc], 0, 0x20)
sub_14220af30(&arg1[0xd1])
sub_14220af30(&arg1[0xd7])
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx_2 = zx.q(data_14401b1a0)
arg1[0xdd].d = 5
arg1[0xde] = arg1
arg1[0xdf] = 0
int64_t rcx_3 = *(ThreadLocalStoragePointer + (rcx_2 << 3))
arg1[0xe0] = 0
*(arg1 + 0x3a) &= 0xfd
*(arg1 + 0x20f) = 1

if (data_143f741f8 s> *(0x14 + rcx_3))
    _Init_thread_header(&data_143f741f8)
    
    if (data_143f741f8 == 0xffffffff)
        sub_140b58260(&data_143f741f0, u"Destructible", 1)
        _Init_thread_footer(&data_143f741f8)

void** rax_1 = *arg1
int64_t r8
r8.b = 1
int64_t rbx = data_143f741f0
int64_t arg_8 = 0
void* rax_2 = rax_1[0xd5](arg1, 0, r8)

if (rax_2 != 0)
    arg_8.b = 0
    int64_t* var_10_1 = &arg_8
    void*** (* var_18)() = sub_140884c50
    
    if (*(sub_140a756e0(&var_18, &data_14397f5f0) + 0x38) != arg1)
        int32_t rax_4 = sub_142216be0(rax_2)
        sub_142221760(rax_2, rbx)
        int32_t rax_5
        int64_t rdx_3
        rax_5, rdx_3 = sub_142216be0(rax_2)
        
        if (rax_4 != rax_5)
            sub_141f11590(arg1)
        
        rdx_3.b = 1
        (*arg1)[0x103](arg1, rdx_3)
    else
        sub_142221800(rax_2, rbx)

arg1[0x41].b |= 0x80
sub_141ef4e60(arg1, 1)
*(arg1 + 0x209) |= 2
*(arg1 + 0x65c) = 0x41c80000
sub_141f70490(arg1, 0)
sub_14224e1a0(&arg1[0xe1], arg1 + 0x70c, &arg1[0xe2])
return arg1
