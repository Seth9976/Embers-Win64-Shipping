// 函数: sub_141e02da0
// 地址: 0x141e02da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg1[4]
int64_t rdi = arg3
int64_t rbx = arg2

if (rbp != 0)
    void* rax_1 = sub_142591550()
    void* rdx = *(rbp + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        void* r8
        
        if (data_143de5480 != 0)
            rax_4, r8 = GetCurrentThreadId()
            rax_4.b = rax_4 == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            r8.b = 1
            sub_141f3e990(arg1[4], 1, r8.b)

void* rbp_1 = arg1[0x48]

if (rbp_1 == 0)
    void* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rbp_1 = rax_6

int64_t r12
r12.b = arg2:4.d == 0

if ((r12.b & sub_140b5b8a0(rbx.d, 0)) != 0)
    int32_t rcx_4
    rcx_4.b = arg3:4.d == 0
    
    if ((rcx_4.b & sub_140b5b8a0(rdi.d, 0)) != 0)
        return *(rbp_1 + 0xe0)

void* rax_10 = sub_141e01bc0(arg1[2])

if (rax_10 != 0)
    if ((r12.b & sub_140b5b8a0(rbx.d, 0)) != 0)
        rbx = data_143f396f0
    
    int32_t rcx_7
    rcx_7.b = arg3:4.d == 0
    
    if ((rcx_7.b & sub_140b5b8a0(rdi.d, 0)) != 0)
        rdi = data_143f394b0
    
    int64_t* rax_14 = (*(*rax_10 + 0x80))(rax_10)
    int64_t* i = *rax_14
    
    for (void* r11_2 = sx.q(rax_14[1].d) * 0x68 + i; i != r11_2; i = &i[0xd])
        if (*i == rdi)
            int64_t r8_1 = sx.q(i[4].d)
            int32_t rdx_1 = 0
            int64_t rax_16 = 0
            
            if (r8_1.d s> 0)
                do
                    if (*(i[3] + (rax_16 << 3)) == rbx)
                        int64_t r8_2 = i[8]
                        
                        if (*(r8_2 + (rax_16 << 3)) != 0)
                            return sx.q(*(*(r8_2 + (sx.q(rdx_1) << 3)) + 0x4c)) + arg1
                    
                    rdx_1 += 1
                    rax_16 += 1
                while (rax_16 s< r8_1)

return 0
