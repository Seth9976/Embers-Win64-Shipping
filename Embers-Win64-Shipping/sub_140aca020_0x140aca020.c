// 函数: sub_140aca020
// 地址: 0x140aca020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x10)

if (rdi == 0)
    int64_t* rdi_3 = *(arg3 + 8)
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t rbx_3 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rbx_3 == 1)
                (*(*rdi_3 + 8))(rdi_3, zx.q(rbx_3))
    
    void* const* rax_10
    rax_10.b = 0
    return rax_10

int64_t var_58 = 0
int64_t var_50 = 0
EnterCriticalSection(rdi + 0x48)
int64_t arg_8 = *(rdi + 0x18)

if (&var_58 != rdi + 0x20)
    int32_t rdi_1 = *(rdi + 0x28)
    int32_t r8 = var_50:4.d
    int64_t r14_1 = *(rdi + 0x20)
    var_50.d = rdi_1
    
    if (rdi_1 != 0 || r8 != 0)
        sub_1405a4c70(&var_58, rdi_1, r8)
        memcpy(var_58, r14_1, rdi_1 * 2)
    else
        var_50:4.d = 0

if (rdi != -0x48)
    LeaveCriticalSection(rdi + 0x48)

sub_140a20ba0(arg2, u"LOCTABLE("", 0xa)
int64_t var_48
int64_t var_38
int64_t* rax_3 = sub_140a30480(sub_140b63b70(&arg_8, &var_38), &var_48, nullptr)
int32_t rcx_7 = rax_3[1].d
int32_t r8_3 = rcx_7 - 1

if (rcx_7 == 0)
    r8_3 = 0

sub_140a20ba0(arg2, *rax_3, r8_3)
int64_t rcx_9 = var_48

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = var_38

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_140a20ba0(arg2, u"", "", 4)
int64_t var_28
int64_t* rax_4 = sub_140a30480(&var_58, &var_28, nullptr)
int32_t rcx_13 = rax_4[1].d
int32_t r8_4 = rcx_13 - 1

if (rcx_13 == 0)
    r8_4 = 0

sub_140a20ba0(arg2, *rax_4, r8_4)
int64_t rcx_15 = var_28

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

sub_140a20ba0(arg2, &data_142e6463c, 2)
int64_t rcx_17 = var_58

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t* rdi_2 = *(arg3 + 8)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rbx_2 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rbx_2 == 1)
            (*(*rdi_2 + 8))(rdi_2, zx.q(rbx_2))

uint64_t rax_5
rax_5.b = 1
return rax_5
