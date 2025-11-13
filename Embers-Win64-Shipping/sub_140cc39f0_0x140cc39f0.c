// 函数: sub_140cc39f0
// 地址: 0x140cc39f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = data_143e1b318

if (rax == 0)
    rax = sub_140cbc430()
    data_143e1b318 = rax

int64_t* rax_1 = sub_140cc3cb0(rax)
void* rbp = nullptr
int64_t* rdi = rax_1

if (rax_1 == 0)
    int64_t* rax_2 = j_sub_140a82f30(zx.q((&rax_1[4]).d))
    rdi = rax_2
    
    if (rax_2 == 0)
        rdi = nullptr
    else
        __builtin_memset(rax_2, 0, 0x20)

data_143e1adf8
data_143e1adf8 = 0
void* rbx = data_143e1a338

if (rbx != 0 && *(rbx + 0xc) s<= data_143e1d994)
    int64_t rsi_1 = sx.q(rdi[1].d)
    int32_t rax_5 = (rsi_1 + 1).d
    rdi[1].d = rax_5
    
    if (rax_5 s> *(rdi + 0xc))
        sub_1405a4d70(rdi)
    
    *(*rdi + (rsi_1 << 3)) = rbx

int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
int64_t r9_1 = zx.q(zx.d(arg4) * 2) | (zx.q(arg3) ^ 1)
arg1[r9_1 + 1](arg1, rdi, zx.q(arg2), r9_1)
int64_t performanceCount[0x2]
QueryPerformanceCounter(&performanceCount)
(*(*arg1 + 8))(arg1, rdi, zx.q(arg3), zx.q(arg4))
char r14 = 0
int32_t rdx_3 = data_1439aa9a8
int32_t rcx_8 = data_1439aa9b4 + 1
data_1439aa9b4 = rcx_8
int64_t rsi_2 = sx.q(rdx_3 - 1)

if (rdx_3 - 1 s>= 0)
    int64_t rbx_2 = rsi_2 << 4
    int64_t temp1_1
    
    do
        int64_t rcx_9 = data_1439aa9a0
        
        if (*(rbx_2 + rcx_9 + 8) == 0)
            r14 = 1
        else
            int64_t* rcx_10 = *(rbx_2 + rcx_9)
            
            if (rcx_10 == 0)
                r14 = 1
            else if ((*(*rcx_10 + 0x50))(rcx_10, arg1, zx.q(arg2), zx.q(arg3)) == 0)
                r14 = 1
        
        rbx_2 -= 0x10
        temp1_1 = rsi_2
        rsi_2 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_8 = data_1439aa9b4
    rdx_3 = data_1439aa9a8

data_1439aa9b4 = rcx_8 - 1

if (r14 != 0 && rcx_8 - 1 s<= 0)
    int32_t r14_1 = rdx_3
    int32_t rsi_3 = 0
    
    if (rdx_3 s> 0)
        int64_t* rbx_3 = nullptr
        
        do
            int64_t rcx_11 = data_1439aa9a0
            
            if (*(rbx_3 + rcx_11 + 8) == 0)
                sub_1405a4880(&data_1439aa9a0, rsi_3, 1, 1)
            else
                int64_t* rcx_12 = *(rbx_3 + rcx_11)
                
                if (rcx_12 == 0)
                    sub_1405a4880(&data_1439aa9a0, rsi_3, 1, 1)
                else if ((*(*rcx_12 + 0x20))(rcx_12) != 0)
                    sub_1405a4880(&data_1439aa9a0, rsi_3, 1, 1)
                else
                    rsi_3 += 1
                    rbx_3 = &rbx_3[2]
            
            rdx_3 = data_1439aa9a8
        while (rsi_3 s< rdx_3)
    
    int32_t rax_17 = rdx_3 * 2
    
    if (rax_17 s<= 2)
        rax_17 = 2
    
    data_1439aa9b0 = rax_17
    
    if (r14_1 s> rax_17 && data_1439aa9ac != rdx_3)
        sub_1405a5410(&data_1439aa9a0, rdx_3)

void* rbx_4 = data_143e1b318

if (rbx_4 == 0)
    void* rax_18 = sub_140cbc430()
    rbx_4 = rax_18
    data_143e1b318 = rax_18

rdi[1].d = 0

if (*(rdi + 0xc) s<= 0xffffffff)
    sub_1405c5570(rdi, 0)

int32_t rax_19 = sub_140a20af0()

if (rax_19 != 0)
    rbp = *(&data_143cf0bf8 + (zx.q(rax_19) u>> 0xe << 3)) + (zx.q(rax_19) & 0x3fff) * 0x18

*(rbp + 8) = rdi
return sub_140ccd2c0(rbx_4, rax_19) __tailcall
