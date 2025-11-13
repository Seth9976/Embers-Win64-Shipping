// 函数: sub_1427d7390
// 地址: 0x1427d7390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1[0xb]
int64_t rdx = *arg2
int32_t arg_8
int32_t* rbp = &arg_8
arg_8 = 0x61

if (rax != 0)
    rbp = rax

sub_1427e5d10(arg1, rdx)
sub_1427e5d10(arg1, arg2[2])
bool cond:1 = arg1[9].b == 0
char const* const r15 = "bad__repx__name"
char* _EndPtr = nullptr

if (not(cond:1))
    void* rdx_2 = *arg1
    char const* const rdx_3
    
    if (*(rdx_2 + 0x10) == 0)
        rdx_3 = "bad__repx__name"
    else
        rdx_3 = *(*(rdx_2 + 8) + zx.q(*(rdx_2 + 0x10) - 1) * 0x18)
    
    int64_t* rcx_2 = arg1[5]
    
    if ((*(*rcx_2 + 0x10))(rcx_2, rdx_3, &_EndPtr) != 0)
        char* _String = _EndPtr
        
        if (_String != 0 && *_String != 0)
            char* _EndPtr_1 = _String
            uint32_t rax_6 = strtoul(_String, &_EndPtr_1, 0xa)
            int64_t rdi_1 = arg1[6]
            arg2[5](rdi_1, &_EndPtr_1, &_EndPtr)
            arg2[4](rdi_1, zx.q(rax_6), zx.q(_EndPtr.d))

*rbp += 1
sub_1427e5c70(arg1)
sub_1427e5d10(arg1, arg2[3])
arg_8.q = 0

if (arg1[9].b != 0)
    void* rdx_8 = *arg1
    
    if (*(rdx_8 + 0x10) != 0)
        r15 = *(*(rdx_8 + 8) + zx.q(*(rdx_8 + 0x10) - 1) * 0x18)
    
    int64_t* rcx_8 = arg1[5]
    
    if ((*(*rcx_8 + 0x10))(rcx_8, r15, &arg_8) != 0)
        char* _String_1 = arg_8.q
        
        if (_String_1 != 0 && *_String_1 != 0)
            _EndPtr = _String_1
            uint32_t rax_12 = strtoul(_String_1, &_EndPtr, 0xa)
            int64_t rdi_2 = arg1[6]
            arg2[5](rdi_2, &arg_8, &_EndPtr)
            arg2[4](rdi_2, zx.q(arg_8), zx.q(rax_12))

sub_1427e5c70(arg1)
return sub_1427e5c70(arg1) __tailcall
