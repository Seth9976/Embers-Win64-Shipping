// 函数: sub_140b5c080
// 地址: 0x140b5c080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a20ba0(arg5, u"<Thread>", 8)
sub_140a20ba0(arg5, u"<CallStack>", 0xb)
void* rdi = *arg4
int32_t rsi = 0
int32_t r8 = 0
void* rdx = rdi
void* r15_2 = (sx.q(arg4[1].d) << 5) + rdi

if (rdi != r15_2)
    do
        int32_t rax_1 = *(rdx + 8)
        int32_t rcx_2 = rax_1 - 1
        
        if (rax_1 == 0)
            rcx_2 = 0
        
        if (r8 s>= rcx_2)
            rcx_2 = r8
        
        rdx += 0x20
        r8 = rcx_2
    while (rdx != r15_2)

int16_t* var_58 = nullptr
int16_t* const rbx_1 = &data_142d40450
int32_t var_50 = 0
int64_t var_48
int32_t var_40
int16_t* const rdx_2

if (rdi == r15_2)
    rdx_2 = &data_142d40450
else
    do
        if (*(rdi + 8) != 0)
            *rdi
        
        int64_t var_60_1 = *(rdi + 0x18)
        int64_t var_68_1 = *(rdi + 0x10)
        sub_140a2e390(&var_48, u"%-*s 0x%016x + %-8x", zx.q(r8 + 1))
        int32_t r8_3
        
        if (var_40 == 0)
            r8_3 = 0
        else
            r8_3 = var_40 - 1
        
        sub_140a20ba0(&var_58, var_48, r8_3)
        int64_t rcx_5 = var_48
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        sub_140a20ba0(&var_58, &data_142d6acb4, 2)
        rdi += 0x20
    while (rdi != r15_2)
    
    rdx_2 = var_58
    
    if (var_50 == 0)
        rdx_2 = &data_142d40450

sub_140a3f2f0(arg5, rdx_2)
sub_140a20ba0(arg5, u"</CallStack>", 0xc)
sub_140a20ba0(arg5, &data_142d6acb4, 2)
int16_t* rcx_10 = var_58

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

wchar16 const* const r8_4 = u"false"

if (arg2 == arg1)
    r8_4 = u"true"

sub_140a2e390(&var_48, u"<IsCrashed>%s</IsCrashed>", r8_4)
int32_t r8_6

if (var_40 == 0)
    r8_6 = 0
else
    r8_6 = var_40 - 1

sub_140a20ba0(arg5, var_48, r8_6)
int64_t rcx_13 = var_48

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

sub_140a20ba0(arg5, &data_142d6acb4, 2)
sub_140a20ba0(arg5, u"<Registers></Registers>", 0x17)
sub_140a20ba0(arg5, &data_142d6acb4, 2)
sub_140a2e390(&var_48, u"<ThreadID>%d</ThreadID>", zx.q(arg2))
int32_t r8_9

if (var_40 == 0)
    r8_9 = 0
else
    r8_9 = var_40 - 1

sub_140a20ba0(arg5, var_48, r8_9)
int64_t rcx_19 = var_48

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

sub_140a20ba0(arg5, &data_142d6acb4, 2)

if (arg3[1].d != 0)
    rbx_1 = *arg3

sub_140a2e390(&var_48, u"<ThreadName>%s</ThreadName>", rbx_1)

if (var_40 != 0)
    rsi = var_40 - 1

sub_140a20ba0(arg5, var_48, rsi)
int64_t rcx_23 = var_48

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

sub_140a20ba0(arg5, &data_142d6acb4, 2)
sub_140a20ba0(arg5, u"</Thread>", 9)
return sub_140a20ba0(arg5, &data_142d6acb4, 2) __tailcall
