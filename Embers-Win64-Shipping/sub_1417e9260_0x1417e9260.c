// 函数: sub_1417e9260
// 地址: 0x1417e9260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t r8 = *(arg2 + 0x20)
int64_t rax_2
rax_2.b = r8 != 0
*(arg2 + 0x20) = rax_2 + r8
int64_t var_88
int64_t* rax_4 = sub_1417dabb0(arg1, &var_88)

if (arg3 != rax_4)
    void* rbx_1 = &arg3[7]
    int64_t rdi_1 = sx.q(rax_4[9].d)
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* r9_1 = rax_4[8]
    void* rdx_1 = &rax_4[7]
    void* rax_5 = *(rbx_1 + 8)
    
    if (r9_1 != 0)
        rdx_1 = r9_1
    
    if (rax_5 != 0)
        rbx_1 = rax_5
    
    memcpy(rbx_1, rdx_1, (rdi_1 << 2).d)
    arg3[9].d = rdi_1.d
    int64_t rbp_1 = sx.q(rax_4[1].d)
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != rbp_1.d)
        sub_1405a5410(arg3, rbp_1.d)
    
    void* rbx_2 = &arg3[2]
    arg3[6].d = 0xffffffff
    *(arg3 + 0x34) = 0
    sub_14059a8e0(rbx_2, rbp_1.d)
    int32_t rax_6 = arg3[1].d + rbp_1.d
    arg3[1].d = rax_6
    
    if (rax_6 s> *(arg3 + 0xc))
        sub_140610660(arg3)
    
    void* rdi_2 = &rax_4[2]
    arg3[6].d = rax_4[6].d
    *(arg3 + 0x34) = *(rax_4 + 0x34)
    
    if (rbx_2 != rdi_2)
        sub_14059a8e0(rbx_2, *(rdi_2 + 0x18))
        int32_t rax_9 = *(rdi_2 + 0x18)
        *(rbx_2 + 0x18) = rax_9
        
        if (rax_9 != 0)
            void* r9_2 = *(rdi_2 + 0x10)
            void* r10_1 = *(rbx_2 + 0x10)
            
            if (r9_2 != 0)
                rdi_2 = r9_2
            
            if (r10_1 != 0)
                rbx_2 = r10_1
            
            memcpy(rbx_2, rdi_2, (zx.q(rax_9 + 0x1f) u>> 5 << 2).d)
    
    memcpy(*arg3, *rax_4, (rbp_1 << 4).d)

int32_t var_40 = 0
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int32_t var_80 = 0
int32_t var_7c

if (var_7c != 0)
    sub_1405a5410(&var_88, 0)

int32_t var_58 = 0xffffffff
int32_t var_54 = 0
void var_78
void* result = sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    result = sub_140a74f90(var_68)

int64_t rcx_12 = var_88

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

__security_check_cookie(rax_1 ^ &var_a8)
return result
