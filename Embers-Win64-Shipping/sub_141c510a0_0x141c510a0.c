// 函数: sub_141c510a0
// 地址: 0x141c510a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143209a60
sub_141c575d0(arg1)

if (data_143f34d90 != 0 && arg1[0x73] != 0 && (*(arg1 + 0x32c) & 1) != 0)
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    sub_1405947f0(&var_28, 0x19)
    int32_t rax_1 = var_20_1 + 0x19
    var_20_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, u"InterruptedRecording.wav", 0x32)
    void* rdi_1 = arg1[0x73]
    
    if (rdi_1 != 0)
        void* rax_2 = sub_1425a1cd0()
        void* rcx_3 = *(rdi_1 + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
            int64_t* rdx_3 = arg1[0x11]
            int64_t var_30_1 = 0
            void* r8_1
            r8_1.b = 1
            uint64_t var_18 = 0
            int64_t var_10_1 = 0
            sub_142377ff0(rdi_1, rdx_3, r8_1.b, &var_28, &var_18)
    
    int64_t rcx_5 = var_28
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

DeleteCriticalSection(&arg1[0x6e])
DeleteCriticalSection(&arg1[0x69])
int64_t rcx_8 = arg1[0x67]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x63]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

DeleteCriticalSection(&arg1[0x5e])
int64_t rcx_11 = arg1[0x5c]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

sub_1406b62e0(&arg1[0x5a])
int64_t rcx_13 = arg1[0x58]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

void* rdi_2 = arg1[0x57]

if (rdi_2 != 0)
    sub_141c326e0(rdi_2)
    j_sub_140a74f90(rdi_2)

DeleteCriticalSection(&arg1[0x52])
int32_t i_1 = arg1[0x50].d
void*** rdi_3 = arg1[0x4f]

if (i_1 != 0)
    int32_t i
    
    do
        sub_141c31b70(rdi_3)
        rdi_3 = &rdi_3[5]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi_3 = arg1[0x4f]

if (rdi_3 != 0)
    sub_140a74f90(rdi_3)

sub_141c50b10(&arg1[0x38])
sub_141c51560(&arg1[0x26])
int64_t rcx_21 = arg1[0x22]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t rcx_22 = arg1[0x20]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t rcx_23 = arg1[0x1e]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t rcx_24 = arg1[0x1c]

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

sub_1405ae080(&arg1[0x12])
sub_141c4fdb0(&arg1[0xf])
arg1[0xe].d = 0
int64_t rcx_27 = arg1[0xd]

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

int32_t result = sub_141c4ff90(&arg1[5])
int64_t* rcx_29 = arg1[4]

if (rcx_29 != 0)
    result = *(rcx_29 + 0xc)
    *(rcx_29 + 0xc) -= 1
    
    if (result == 1 && rcx_29 != 0)
        return (*(*rcx_29 + 8))(rcx_29, 1)

return result
