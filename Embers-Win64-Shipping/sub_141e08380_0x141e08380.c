// 函数: sub_141e08380
// 地址: 0x141e08380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[4]

if (rbx != 0)
    void* rax_1 = sub_142591550()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        void* r8_1
        
        if (data_143de5480 != 0)
            rax_4, r8_1 = GetCurrentThreadId()
            rax_4.b = rax_4 == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            r8_1.b = 1
            sub_141f3e990(arg1[4], 1, r8_1.b)

int64_t* rcx_3 = arg1[0x48]

if (rcx_3 == 0)
    int64_t* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rcx_3 = rax_6

void* r8_2 = sub_141e0ee30(rcx_3)

if (sub_141f3b9f0(arg1[4]) == arg1)
    void* rax_8 = arg1[4]
    int64_t* i = *(rax_8 + 0x6c0)
    
    for (void* r14_1 = &i[sx.q(*(rax_8 + 0x6c8))]; i != r14_1; i = &i[1])
        int64_t* rbx_1 = *i
        void* rbp_1 = rbx_1[4]
        
        if (rbp_1 != 0)
            void* rax_10 = sub_142591550()
            void* rdx_2 = *(rbp_1 + 0x10)
            r8_2 = rax_10 + 0x30
            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
            
            if (rax_11.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_11 << 3)) == r8_2)
                uint32_t rax_13
                
                if (data_143de5480 != 0)
                    rax_13, r8_2 = GetCurrentThreadId()
                    rax_13.b = rax_13 == data_143de5470
                
                if (data_143de5480 == 0 || rax_13.b != 0)
                    r8_2.b = 1
                    r8_2 = sub_141f3e990(rbx_1[4], 1, r8_2.b)
        
        void* rcx_8 = rbx_1[0x48]
        
        if (rcx_8 == 0)
            void* rax_15
            rax_15, r8_2 = (*(*rbx_1 + 0x300))(rbx_1)
            rbx_1[0x48] = rax_15
            rcx_8 = rax_15
        
        r8_2 = sub_141e0d8e0(rcx_8, *(rcx_8 + 0xc0), r8_2.b)

void* rbx_2 = arg1[4]

if (rbx_2 != 0)
    void* rax_16 = sub_142591550()
    void* rdx_3 = *(rbx_2 + 0x10)
    r8_2 = rax_16 + 0x30
    int64_t rax_17 = sx.q(*(rax_16 + 0x38))
    
    if (rax_17.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_17 << 3)) == r8_2)
        uint32_t rax_19
        
        if (data_143de5480 != 0)
            rax_19, r8_2 = GetCurrentThreadId()
            rax_19.b = rax_19 == data_143de5470
        
        if (data_143de5480 == 0 || rax_19.b != 0)
            r8_2.b = 1
            r8_2 = sub_141f3e990(arg1[4], 1, r8_2.b)

void* rcx_12 = arg1[0x48]

if (rcx_12 == 0)
    void* rax_21
    rax_21, r8_2 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_21
    rcx_12 = rax_21

return sub_141e0d8e0(rcx_12, *(rcx_12 + 0xc0), r8_2.b) __tailcall
