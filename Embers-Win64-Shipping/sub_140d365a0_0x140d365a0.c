// 函数: sub_140d365a0
// 地址: 0x140d365a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* entry_rdx
char* rax = *(entry_rdx + 0x20)
*(entry_rdx + 0x38) = 0
*(entry_rdx + 0x30) = 0
uint32_t rcx = zx.d(*rax)
*(entry_rdx + 0x20) = &rax[1]
int512_t entry_zmm1
(&data_143e1cd60)[zx.q(rcx)](*(entry_rdx + 0x18), entry_zmm1, 0, &data_143e1cd60)
void* rax_3 = *(entry_rdx + 0x30)
int64_t* rdx = *(entry_rdx + 0x38)
char rcx_2 = (*(rax_3 + 0x80)).b
int64_t* rax_4 = *(rax_3 + 0x78)
int64_t* var_48 = rax_4
int32_t count_1 = *(rax_4 + 0x3c)
sub_140cda7e0(&var_48, 0)
char* result = *(entry_rdx + 0x20)

if (*result != 0x32)
    char rsi_1 = not.b(rcx_2) & 1
    int64_t* r12_1 = var_48
    int32_t r13_1 = 0
    int64_t count = sx.q(count_1)
    
    do
        int32_t rdi_1 = rdx[1].d
        int32_t rcx_4 = *(rdx + 0xc)
        int32_t rax_5 = rdi_1 + 1
        rdx[1].d = rax_5
        
        if (rsi_1 != 0)
            if (rax_5 s> rcx_4)
                sub_140ce4cd0(rdx, zx.q(rdi_1), count.d)
                rax_5 = rdx[1].d
        else if (rax_5 s> rcx_4)
            sub_140ce4c40(rdx, rdi_1, count.d)
            rax_5 = rdx[1].d
        
        void* rcx_7
        
        if (rax_5 != 0)
            void* rax_6 = *rdx
            
            if (rsi_1 == 0 && (rax_6.b & 1) != 0)
                rax_6 = (rax_6 s>> 1) + rdx
            
            rcx_7 = sx.q(rdi_1 * count.d) + rax_6
        else
            rcx_7 = nullptr
        
        if (not(test_bit(zx.q(r12_1[8].d), 9)))
            (*(*r12_1 + 0xf0))(r12_1, rcx_7)
        else
            memset(rcx_7, 0, count)
        
        void* r8_4
        
        if (rdx[1].d != 0)
            void* rax_10 = *rdx
            
            if (rsi_1 == 0 && (rax_10.b & 1) != 0)
                rax_10 = (rax_10 s>> 1) + rdx
            
            r8_4 = sx.q(r13_1) + rax_10
        else
            r8_4 = nullptr
        
        char* rax_12 = *(entry_rdx + 0x20)
        uint32_t rcx_10 = zx.d(*rax_12)
        *(entry_rdx + 0x20) = &rax_12[1]
        (&data_143e1cd60)[zx.q(rcx_10)](*(entry_rdx + 0x18), entry_rdx, r8_4, &data_143e1cd60)
        result = *(entry_rdx + 0x20)
        r13_1 += count.d
    while (*result != 0x32)

void* rbp
rbp.b = result != 0
*(entry_rdx + 0x20) = rbp + result
return result
