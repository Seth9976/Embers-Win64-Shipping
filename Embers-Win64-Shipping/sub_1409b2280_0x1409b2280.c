// 函数: sub_1409b2280
// 地址: 0x1409b2280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t r15 = 0
int64_t* rbx = arg2
int32_t rdx = 0
int32_t var_3c = 0
int64_t var_48 = 0
int64_t r8 = 0
int32_t var_40 = 0
int32_t rbp = 0
int32_t rax = rbx[1].d

if (rax s> 0)
    sub_1405c5660(&var_48, rax)
    rax = rbx[1].d
    rdx = var_3c
    r8 = var_48
    rbp = var_40

int64_t r12 = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t rcx_2 = r12 * 0x28
    int64_t arg_8 = rcx_2
    int64_t temp1_1
    
    do
        int32_t* rsi_2 = *rbx + rcx_2
        int64_t rdi_1 = sx.q(rbp)
        int64_t rbx_1 = sx.q(*rsi_2)
        rbp = (rdi_1 + 1).d
        
        if (rbp s> rdx)
            sub_1405c4ec0(&var_48)
            r8 = var_48
        
        int64_t rcx_4 = rdi_1 * 5
        *(r8 + (rcx_4 << 3)) = data_143a1c6c8
        *(r8 + (rcx_4 << 3) + 8) = 0
        *(r8 + (rcx_4 << 3) + 0x10) = 0
        *(r8 + (rcx_4 << 3) + 0x18) = 0
        *(r8 + (rcx_4 << 3) + 0x20) = 0
        int32_t* rcx_6 = r8 + sx.q(rbp - 1) * 0x28
        *rcx_6 = rbx_1.d
        int32_t* rdi_2 = *(rsi_2 + 8)
        void* r14_1 = &rdi_2[sx.q(rsi_2[4]) * 2]
        
        if (rdi_2 != r14_1)
            int64_t r9_1 = rbx_1 * 0x28
            int64_t arg_18 = r9_1
            
            do
                int64_t rsi_3 = sx.q(rcx_6[4])
                int32_t rax_8 = (rsi_3 + 1).d
                rcx_6[4] = rax_8
                
                if (rax_8 s> rcx_6[5])
                    sub_1405a4d70(&rcx_6[2])
                    r9_1 = arg_18
                
                int64_t rcx_8 = *(rcx_6 + 8)
                *(rcx_8 + (rsi_3 << 3)) = 0
                *(rcx_8 + (rsi_3 << 3) + 4) = data_143a1c6b0
                void* r8_1 = *(rcx_6 + 8) + (sx.q(rcx_6[4]) << 3)
                *(r8_1 - 8) = *rdi_2
                int64_t rdx_4 = sx.q(*rdi_2)
                int64_t rcx_10 = *(*(arg1 + 0x28) + 0xe0)
                int32_t* rdx_5
                
                if (rdx_4.d s< 0 || rdx_4.d s>= *(r9_1 + rcx_10 + 8))
                    rdx_5 = &data_143a1c6b8
                else
                    rdx_5 = *(r9_1 + rcx_10) + (rdx_4 << 2)
                
                rdi_2 = &rdi_2[2]
                *(r8_1 - 4) = *rdx_5
            while (rdi_2 != r14_1)
            
            r8 = var_48
        
        rdx = var_3c
        rcx_2 = arg_8 - 0x28
        temp1_1 = r12
        r12 -= 1
        rbx = arg_10
        arg_8 = rcx_2
    while (temp1_1 - 1 s>= 0)

int64_t* rax_14 = j_sub_140a82f30(0x18)

if (rax_14 == 0)
    rax_14 = nullptr
else
    *rax_14 = &data_142e3f8b8
    rax_14[1] = var_48
    *(rax_14 + 0x14) = var_3c
    var_40.q = 0
    var_48 = 0
    rax_14[2].d = rbp

arg_10 = rax_14
sub_1409afc10(arg1, &arg_10)
sub_1409aacc0(&var_48)
TEB* gsbase

if (data_143cee610 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cee610)
    
    if (data_143cee610 == 0xffffffff)
        atexit(sub_142cb9370)
        _Init_thread_footer(&data_143cee610)

int32_t rax_17 = rbx[1].d
int32_t rdx_7 = data_143cee60c
data_143cee608 = 0

if (rax_17 s> rdx_7)
    sub_1405dadb0(&data_143cee600, rax_17)
    rdx_7 = data_143cee60c

int32_t* r14_2 = *rbx
void* r12_1 = &r14_2[sx.q(rbx[1].d) * 0xa]

if (r14_2 != r12_1)
    while (true)
        int64_t rdi_3 = sx.q(data_143cee608)
        int32_t rbx_3 = *r14_2
        int32_t rax_19 = (rdi_3 + 1).d
        data_143cee608 = rax_19
        
        if (rax_19 s> rdx_7)
            sub_1405a4cf0(&data_143cee600)
        
        *(data_143cee600 + (rdi_3 << 2)) = rbx_3
        int32_t* rdi_4 = *(r14_2 + 8)
        void* rbp_1 = &rdi_4[sx.q(r14_2[4]) * 2]
        
        if (rdi_4 != rbp_1)
            int32_t* rsi_4 = &rdi_4[1]
            
            do
                sub_141ce24e0(*(arg1 + 0x28), rbx_3, *rdi_4, *rsi_4)
                rdi_4 = &rdi_4[2]
                rsi_4 = &rsi_4[2]
            while (rdi_4 != rbp_1)
        
        r14_2 = &r14_2[0xa]
        
        if (r14_2 == r12_1)
            break
        
        rdx_7 = data_143cee60c

int64_t* rbx_4 = *(arg1 + 0x3b8)
void* result = &rbx_4[sx.q(*(arg1 + 0x3c0))]
uint64_t rdi_6 = sx.q(*(arg1 + 0x3c0)) << 3 u>> 3

if (rbx_4 u> result)
    rdi_6 = 0

if (rdi_6 != 0)
    do
        int64_t* rcx_21 = *rbx_4
        result = (*(*rcx_21 + 0x338))(rcx_21, arg1, &data_143cee600)
        r15 += 1
        rbx_4 = &rbx_4[1]
    while (r15 != rdi_6)

return result
