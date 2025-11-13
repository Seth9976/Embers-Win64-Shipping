// 函数: sub_1426be550
// 地址: 0x1426be550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t rbp = 0
void* rsi = *(arg2 + 0x38)
void arg_10

if (rsi != 0)
    void* rcx = arg1[0x5f]
    char rax_1
    
    if (rcx != 0)
        rax_1 = sub_1426b60e0(rcx, rsi)
    
    if (rcx == 0 || rax_1 == 0)
        int64_t rax_2 = sub_14272e4a0()
        int64_t r8_1 = *arg1
        void* rax_3 = (*(r8_1 + 0x610))(arg1, rax_2, r8_1)
        arg1[0x5f] = rax_3
        
        if (rax_3 != 0)
            int64_t rax_8 = *(rax_3 + 0xc0)
            
            if (rax_8 == 0 || rax_8 != rsi)
                (*(*arg1 + 0x7b8))(arg1, rax_3, rsi)
        else
            uint64_t rbx_1 = *sub_140b58260(&arg_10, u"BlackboardComponent", (rax_3 + 1).d)
            uint32_t rcx_5
            rcx_5.b = (rbx_1 u>> 0x20).d == 0
            
            if ((rcx_5.b & sub_140b5b8a0(rbx_1.d, 0)) != 0)
                sub_140d19010(arg1, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
            
            void* rax_7
            rax_7, arg3 = sub_140d2dfc0(sub_14272e4a0(), arg1, rbx_1, 0, 0, 0, 0, 0, 0)
            arg1[0x5f] = rax_7
            
            if (rax_7 != 0)
                int64_t r9_1 = *arg1
                (*(r9_1 + 0x7b8))(arg1, rax_7, rsi, r9_1)
                arg3 = sub_141ef1390(arg1[0x5f])

void* rbx_3 = arg1[0x5c]
void* rax_10
int64_t rax_11
void* rdx_5

if (rbx_3 != 0)
    rax_10 = sub_1427297d0()
    rdx_5 = *(rbx_3 + 0x10)
    rax_11 = sx.q(*(rax_10 + 0x38))

if (rbx_3 == 0 || rax_11.d s> *(rdx_5 + 0x38)
        || *(*(rdx_5 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
    uint64_t rbx_2 = *sub_140b58260(&arg_10, u"BTComponent", 1)
    uint32_t rcx_15
    rcx_15.b = (rbx_2 u>> 0x20).d == 0
    
    if ((rcx_15.b & sub_140b5b8a0(rbx_2.d, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* rax_16 = sub_140d2dfc0(sub_1427297d0(), arg1, rbx_2, 0, 0, 0, 0, 0, 0)
    rbx_3 = rax_16
    arg3 = sub_141ef1390(rax_16)

arg1[0x5c] = rbx_3
int32_t rax_17 = *(rbx_3 + 0x118)

if (rax_17 != 0)
    rbp = *(zx.q(*(*(rbx_3 + 0x110) + 0x40)) * 0x38 + *(rbx_3 + 0x120))

if (rbp == arg2)
    if ((*(rbx_3 + 0x263) & 0x20) == 0 || rax_17 == 0)
        rax_17.b = 0
    else
        rax_17.b = 1

if (rbp != arg2 || rax_17.b == 0)
    sub_1426bfc00(rbx_3, 0, arg3)
    *(rbx_3 + 0x1bc) |= 1
    *(rbx_3 + 0x1b0) = arg2
    *(rbx_3 + 0x1b8) = 1
    sub_1426baf10(rbx_3)

rax_17.b = 1
return rax_17
