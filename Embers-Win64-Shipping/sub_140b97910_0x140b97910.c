// 函数: sub_140b97910
// 地址: 0x140b97910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1->__offset(0xe8).d = 0
int64_t rcx = arg1->__offset(0xe0).q

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1407547c0(&arg1[4], 0)
int64_t rcx_2 = arg1->__offset(0xc0).q

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1->__offset(0xa0).q

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1->__offset(0x98).d = 0
int64_t rcx_4 = arg1->__offset(0x90).q

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140b7c310(&arg1[2], 0)
int64_t rcx_6 = arg1->__offset(0x70).q

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1->__offset(0x50).q

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int32_t i_2 = arg1->__offset(0x48).d
int64_t* rbx = arg1->__offset(0x40).q

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_8 = *rbx
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rbx = &rbx[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx = arg1->__offset(0x40).q

if (rbx != 0)
    sub_140a74f90(rbx)

int32_t i_3 = arg1->__offset(0x38).d
int64_t* rbx_1 = arg1->__offset(0x30).q

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_10 = *rbx_1
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = arg1->__offset(0x30).q

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return DeleteCriticalSection(arg1) __tailcall
