// 函数: sub_141e05a00
// 地址: 0x141e05a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e0ebf0(arg1)
void* rax_1 = *(arg1[4] + 0x430)

if (rax_1 != 0)
    rax_1 = *(rax_1 + 0x60)

arg1[5] = rax_1
sub_141e01bc0(arg1[2])
int64_t* rdi = arg1[4]
void* rax_2 = rdi[0x86]
void* rcx_4

if (rax_2 != 0 && *(rax_2 + 0x60) != 0)
    if (rdi != 0)
        void* rax_3 = sub_142591550()
        void* rdx = rdi[2]
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
            void* r8_1
            r8_1.b = 1
            sub_141f3e990(arg1[4], 1, r8_1.b)
    
    rcx_4 = arg1[0x48]
    
    if (rcx_4 == 0)
        void* rax_7 = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax_7
        rcx_4 = rax_7
    
    sub_141e0a910(rcx_4, rdi, rdi[0x86])
else if (arg1[5] != 0)
    if (rdi != 0)
        void* rax_8 = sub_142591550()
        void* rdx_1 = rdi[2]
        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
        
        if (rax_9.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
            void* r8_2
            r8_2.b = 1
            sub_141f3e990(arg1[4], 1, r8_2.b)
    
    rcx_4 = arg1[0x48]
    
    if (rcx_4 == 0)
        void* rax_12 = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax_12
        rcx_4 = rax_12
    
    sub_141e0a910(rcx_4, rdi, arg1[5])
void* rdi_1 = arg1[4]

if (rdi_1 != 0)
    void* rax_13 = sub_142591550()
    void* rdx_3 = *(rdi_1 + 0x10)
    int64_t rax_14 = sx.q(*(rax_13 + 0x38))
    
    if (rax_14.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_14 << 3)) == rax_13 + 0x30)
        void* r8_4
        r8_4.b = 1
        sub_141f3e990(arg1[4], 1, r8_4.b)

int64_t* rcx_11 = arg1[0x48]

if (rcx_11 == 0)
    int64_t* rax_17 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_17
    rcx_11 = rax_17

(*(*rcx_11 + 8))(rcx_11, arg1)
(*(*arg1 + 0x2b0))(arg1)
sub_14245e8d0(arg1)
void* rdi_2 = arg1[4]

if (rdi_2 != 0)
    void* rax_20 = sub_142591550()
    void* rdx_5 = *(rdi_2 + 0x10)
    int64_t rax_21 = sx.q(*(rax_20 + 0x38))
    
    if (rax_21.d s<= *(rdx_5 + 0x38) && *(*(rdx_5 + 0x30) + (rax_21 << 3)) == rax_20 + 0x30)
        void* r8_5
        r8_5.b = 1
        sub_141f3e990(arg1[4], 1, r8_5.b)

int64_t* rcx_17 = arg1[0x48]

if (rcx_17 == 0)
    int64_t* rax_24 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_24
    rcx_17 = rax_24

sub_141e05d80(rcx_17, arg2)
void* rdi_3 = arg1[4]

if (rdi_3 != 0)
    void* rax_25 = sub_142591550()
    void* rdx_7 = *(rdi_3 + 0x10)
    int64_t rax_26 = sx.q(*(rax_25 + 0x38))
    
    if (rax_26.d s<= *(rdx_7 + 0x38) && *(*(rdx_7 + 0x30) + (rax_26 << 3)) == rax_25 + 0x30)
        void* r8_6
        r8_6.b = 1
        sub_141f3e990(arg1[4], 1, r8_6.b)

void* rcx_21 = arg1[0x48]

if (rcx_21 == 0)
    void* rax_29 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_29
    rcx_21 = rax_29

sub_141df3e40(rcx_21)
void arg_8
void* var_10 = &arg_8
void* const (* var_18)(int64_t arg1, int64_t* arg2, int64_t* arg3) = sub_141df58a0
sub_141e08590(arg1, nullptr, &var_18, arg2)
return sub_14245e910(arg1) __tailcall
