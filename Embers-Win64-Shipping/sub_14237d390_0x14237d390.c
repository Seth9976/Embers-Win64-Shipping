// 函数: sub_14237d390
// 地址: 0x14237d390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[1]
void* r8 = *arg1

if (r8 != 0)
    arg5, arg4 = sub_1423943c0(arg3, *(arg2 + 0x50), r8, arg4, arg5)
    void* rdx_1 = *(arg2 + 0x78)
    
    if (rdx_1 != 0)
        char rax_1 = *(arg2 + 0xb1)
        char rcx_1 = 0x3d
        int32_t r9_1 = 4
        
        if (rax_1 != 0)
            rcx_1 = 0x3f
        
        if (rax_1 != 0)
            r9_1 = 8
        
        arg5, arg4 = sub_142394310(arg3, rdx_1, *(arg2 + 0x50), r9_1, arg5, arg4, rcx_1)

if (rbx != 0)
    arg5, arg4 = sub_1423943c0(arg3, *(arg2 + 0x68), rbx, arg4, arg5)
    void* rdx_3 = *(arg2 + 0x88)
    
    if (rdx_3 != 0)
        char rax_2 = *(arg2 + 0xb0)
        char rcx_4 = 0xf
        int32_t r9_2 = 4
        
        if (rax_2 != 0)
            rcx_4 = 0x11
        
        if (rax_2 != 0)
            r9_2 = 8
        
        arg5, arg4 = sub_142394310(arg3, rdx_3, *(arg2 + 0x68), r9_2, arg5, arg4, rcx_4)

void* r8_4 = arg1[2]

if (r8_4 != 0)
    arg5, arg4 = sub_1423943c0(arg3, *(arg2 + 0xc8), r8_4, arg4, arg5)
    void* rdx_5 = *(arg2 + 0xd0)
    
    if (rdx_5 != 0)
        arg5, arg4 = sub_142394310(arg3, rdx_5, *(arg2 + 0xc8), 4, arg5, arg4, 0xd)

void* rdx_6 = *(arg2 + 0x108)

if (rdx_6 != 0)
    void* r8_6 = arg1[3]
    
    if (r8_6 != 0)
        arg5, arg4 = sub_1423943c0(arg3, rdx_6, r8_6, arg4, arg5)
        void* rdx_7 = *(arg2 + 0x118)
        
        if (rdx_7 != 0)
            arg5, arg4 = sub_142394310(arg3, rdx_7, *(arg2 + 0x108), 4, arg5, arg4, 0x25)

int128_t zmm2
int128_t zmm3
zmm2, zmm3 = sub_14237b9a0(arg2 + 0x138, &arg1[4], arg3, arg4, arg5)
void* rdx_9 = *(arg2 + 0x1d0)

if (rdx_9 != 0)
    void* r8_9 = arg1[6]
    
    if (r8_9 != 0)
        int128_t zmm2_1
        int128_t zmm3_1
        zmm2_1, zmm3_1 = sub_1423943c0(arg3, rdx_9, r8_9, zmm3, zmm2)
        zmm2, zmm3 = sub_142394310(arg3, *(arg2 + 0x1d8), *(arg2 + 0x1d0), 0x10, zmm2_1, zmm3_1, 1)

void* r8_11 = arg1[7]

if (r8_11 != 0)
    void* rbx_1 = *(arg2 + 0x18)
    void* rdx_11 = *(rbx_1 + 0x10)
    
    if (rdx_11 != 0)
        zmm2, zmm3 = sub_142394210(arg3, rdx_11, r8_11, zmm3, zmm2)
        void* rdx_12 = *(rbx_1 + 0x18)
        
        if (rdx_12 != 0)
            zmm2, zmm3 = sub_142394290(arg3, rdx_12, *(rbx_1 + 0x10), zmm3, zmm2)

void* r8_13 = arg1[8]

if (r8_13 != 0)
    void* rbx_2 = *(arg2 + 0x28)
    void* rdx_13 = *(rbx_2 + 0x10)
    
    if (rdx_13 != 0)
        zmm2, zmm3 = sub_142394210(arg3, rdx_13, r8_13, zmm3, zmm2)
        void* rdx_14 = *(rbx_2 + 0x18)
        
        if (rdx_14 != 0)
            zmm2, zmm3 = sub_142394290(arg3, rdx_14, *(rbx_2 + 0x10), zmm3, zmm2)

int32_t i = 0

if (arg1[0xa].d s> 0)
    int64_t r12_1 = 0
    
    do
        int64_t* r15_1 = arg1[9]
        int64_t rbx_3 = *(r15_1 + r12_1)
        void* const rcx_20
        
        if (*(arg2 + 0x318) == *(arg2 + 0x344))
        label_14237d630:
            rcx_20 = nullptr
        else
            int32_t rax_5 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
            void* r8_15 = arg2 + 0x348
            void* rcx_18 = *(r8_15 + 8)
            
            if (rcx_18 != 0)
                r8_15 = rcx_18
            
            int32_t rax_7 = *(r8_15 + (((sx.q(*(arg2 + 0x358)) - 1) & sx.q(rax_5)) << 2))
            
            if (rax_7 == 0xffffffff)
            label_14237d630_1:
                rcx_20 = nullptr
            else
                int64_t r8_16 = *(arg2 + 0x310)
                
                while (true)
                    int64_t rdx_18 = sx.q(rax_7) * 3
                    rcx_20 = r8_16 + (rdx_18 << 3)
                    
                    if (*(r8_16 + (rdx_18 << 3)) == rbx_3)
                        break
                    
                    rax_7 = *(rcx_20 + 0x10)
                    
                    if (rax_7 == 0xffffffff)
                        goto label_14237d630_2
                
                if (rax_7 == 0xffffffff)
                label_14237d630_2:
                    rcx_20 = nullptr
        
        void* rbx_4 = *(rcx_20 + 8)
        void* r8_17 = *(r15_1 + r12_1 + 8)
        void* rax_8 = r8_17
        void* rdx_19 = *(rbx_4 + 0x10)
        
        if (rdx_19 != 0 && r8_17 != 0)
            int128_t zmm2_2
            int128_t zmm3_2
            zmm2_2, zmm3_2 = sub_1423943c0(arg3, rdx_19, r8_17, zmm3, zmm2)
            char rax_9 = *(rbx_4 + 0x21)
            char rcx_22 = 0x1c
            int32_t r9_3 = 4
            
            if (rax_9 != 0)
                rcx_22 = 0x39
            
            if (rax_9 != 0)
                r9_3 = 1
            
            zmm2, zmm3 =
                sub_142394310(arg3, *(rbx_4 + 0x18), *(rbx_4 + 0x10), r9_3, zmm2_2, zmm3_2, rcx_22)
            rax_8 = *(r15_1 + r12_1 + 8)
        
        void* rdx_21 = *(rbx_4 + 0x58)
        
        if (rdx_21 != 0 && rax_8 != 0)
            int128_t zmm2_3
            int128_t zmm3_3
            zmm2_3, zmm3_3 = sub_1423943c0(arg3, rdx_21, rax_8, zmm3, zmm2)
            zmm2, zmm3 =
                sub_142394310(arg3, *(rbx_4 + 0x60), *(rbx_4 + 0x58), 4, zmm2_3, zmm3_3, 0x1c)
        
        i += 1
        r12_1 += 0x18
    while (i s< arg1[0xa].d)

return sub_142396d40(arg1) __tailcall
