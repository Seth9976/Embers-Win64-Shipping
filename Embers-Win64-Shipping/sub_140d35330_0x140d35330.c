// 函数: sub_140d35330
// 地址: 0x140d35330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* entry_rdx
char* rax = *(entry_rdx + 0x20)
*(entry_rdx + 0x38) = 0
*(entry_rdx + 0x30) = 0
uint32_t rcx = zx.d(*rax)
*(entry_rdx + 0x20) = &rax[1]
int512_t entry_zmm1
(&data_143e1cd60)[zx.q(rcx)](*(entry_rdx + 0x18), entry_zmm1, 0)
void* const rdi = *(entry_rdx + 0x30)
int64_t r14 = *(entry_rdx + 0x38)
int64_t rbx_1

if (rdi != 0)
    rbx_1 = *(rdi + 8)
    sub_140d11050()

if (rdi == 0 || rbx_1 != &data_143e1b9d0)
    rdi = nullptr
    void* rbp_1 = *(entry_rdx + 0x30)
    
    if (rbp_1 != 0)
        int64_t rbx_2 = *(rbp_1 + 8)
        sub_140cea1e0()
        
        if (rbx_2 == &data_143e1b870)
            rdi = *(rbp_1 + 0x78)
            int64_t rbx_3
            
            if (rdi != 0)
                rbx_3 = *(rdi + 8)
                sub_140d11050()
            
            if (rdi == 0 || rbx_3 != &data_143e1b9d0)
                rdi = nullptr

char* rax_3 = *(entry_rdx + 0x20)
char arg_10 = 0
uint32_t rcx_2 = zx.d(*rax_3)
*(entry_rdx + 0x20) = &rax_3[1]
char result = (&data_143e1cd60)[zx.q(rcx_2)](*(entry_rdx + 0x18), entry_rdx, &arg_10)

if (r14 != 0)
    uint64_t rcx_4 = zx.q(*(rdi + 0x79))
    char rdx_1
    
    if (arg_10 == 0)
        rdx_1 = 0
    else
        rdx_1 = *(rdi + 0x7a)
    
    result = (not.b(*(rdi + 0x7b)) & *(rcx_4 + r14)) | rdx_1
    *(rcx_4 + r14) = result

return result
