// 函数: sub_1427d40d0
// 地址: 0x1427d40d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1[0xb]
int32_t arg_8
int32_t* r14 = &arg_8
arg_8 = 0x1b4

if (rax != 0)
    r14 = rax

sub_1427e5d10(arg1, *arg2)
sub_1427e5d10(arg1, arg2[2])
void* rdx_2 = *arg1
char const* const r15 = "bad__repx__name"
char const* const rdx_3

if (*(rdx_2 + 0x10) == 0)
    rdx_3 = "bad__repx__name"
else
    rdx_3 = *(*(rdx_2 + 8) + zx.q(*(rdx_2 + 0x10) - 1) * 0x18)

int64_t* rcx_2 = arg1[5]
int64_t* rbx = arg1[8]
int64_t rbp = 0
int64_t r12 = 0
void var_40
char* _EndPtr
char* _EndPtr_1

if ((*(*rcx_2 + 0x10))(rcx_2, rdx_3, &_EndPtr) == 0)
label_1427d4194:
    int64_t rbx_1 = arg1[6]
    int64_t var_48
    arg2[5](rbx_1, &var_40, &var_48)
    arg2[4](rbx_1, r12, var_48)
else
    char* _String = _EndPtr
    _EndPtr_1 = _String
    
    if (_String == 0 || *_String == 0)
        goto label_1427d4194
    
    if (_strtoui64(_String, &_EndPtr_1, 0xa) == 0)
        goto label_1427d4194
    
    int64_t rax_7 = sub_1427d9880(rbx)
    r12 = rax_7
    
    if (rax_7 != 0)
        goto label_1427d4194

*r14 += 1
sub_1427e5c70(arg1)
sub_1427e5d10(arg1, arg2[3])
void* rdx_9 = *arg1

if (*(rdx_9 + 0x10) != 0)
    r15 = *(*(rdx_9 + 8) + zx.q(*(rdx_9 + 0x10) - 1) * 0x18)

int64_t* rcx_9 = arg1[5]
int64_t* rbx_2 = arg1[8]

if ((*(*rcx_9 + 0x10))(rcx_9, r15, &arg_8) == 0)
label_1427d423d:
    int64_t rbx_3 = arg1[6]
    arg2[5](rbx_3, &_EndPtr_1, &var_40)
    arg2[4](rbx_3, _EndPtr_1, rbp)
else
    char* _String_1 = arg_8.q
    _EndPtr = _String_1
    
    if (_String_1 == 0 || *_String_1 == 0)
        goto label_1427d423d
    
    if (_strtoui64(_String_1, &_EndPtr, 0xa) == 0)
        goto label_1427d423d
    
    int64_t rax_14 = sub_1427d9880(rbx_2)
    rbp = rax_14
    
    if (rax_14 != 0)
        goto label_1427d423d

sub_1427e5c70(arg1)
return sub_1427e5c70(arg1) __tailcall
