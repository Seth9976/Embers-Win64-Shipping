// 函数: sub_1421be6d0
// 地址: 0x1421be6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg1 + 0x28)

if (*(r15 + 0xa8) s<= 0)
    return 

int32_t i = 0
int64_t* r14_1 = nullptr

do
    int64_t* rbx_1 = *(r14_1 + *(r15 + 0xa0))
    int512_t zmm3
    
    if ((*(*rbx_1 + 0x348))(rbx_1, 1) != 0)
        void* rcx_1 = *(arg1 + 0x18)
        
        if (*(rcx_1 + 0x508) s> 0)
            int32_t j = 0
            
            do
                zmm3.o = arg2
                (*(*rbx_1 + 0x350))(rbx_1, arg1, sx.q(j) * 0x38 + *(rcx_1 + 0x500), zmm3, arg3)
                rcx_1 = *(arg1 + 0x18)
                j += 1
            while (j s< *(rcx_1 + 0x508))
    
    if ((*(*rbx_1 + 0x348))(rbx_1, 2) != 0)
        void* rdx_2 = *(arg1 + 0x18)
        
        if (*(rdx_2 + 0x518) s> 0)
            int32_t j_1 = 0
            
            do
                zmm3.o = arg2
                (*(*rbx_1 + 0x350))(rbx_1, arg1, *(rdx_2 + 0x510) + sx.q(j_1) * 0x48, zmm3, arg3)
                rdx_2 = *(arg1 + 0x18)
                j_1 += 1
            while (j_1 s< *(rdx_2 + 0x518))
    
    if ((*(*rbx_1 + 0x348))(rbx_1, 3) != 0)
        void* rcx_7 = *(arg1 + 0x18)
        
        if (*(rcx_7 + 0x528) s> 0)
            int32_t j_2 = 0
            
            do
                zmm3.o = arg2
                (*(*rbx_1 + 0x350))(rbx_1, arg1, sx.q(j_2) * 0x70 + *(rcx_7 + 0x520), zmm3, arg3)
                rcx_7 = *(arg1 + 0x18)
                j_2 += 1
            while (j_2 s< *(rcx_7 + 0x528))
    
    if ((*(*rbx_1 + 0x348))(rbx_1, 4) != 0)
        void* rcx_10 = *(arg1 + 0x18)
        
        if (*(rcx_10 + 0x538) s> 0)
            int32_t j_3 = 0
            
            do
                zmm3.o = arg2
                (*(*rbx_1 + 0x350))(rbx_1, arg1, (sx.q(j_3) << 6) + *(rcx_10 + 0x530), zmm3, arg3)
                rcx_10 = *(arg1 + 0x18)
                j_3 += 1
            while (j_3 s< *(rcx_10 + 0x538))
    
    if ((*(*rbx_1 + 0x348))(rbx_1, 5) != 0)
        void* rcx_13 = *(arg1 + 0x18)
        
        if (*(rcx_13 + 0x548) s> 0)
            int32_t j_4 = 0
            
            do
                zmm3.o = arg2
                (*(*rbx_1 + 0x350))(rbx_1, arg1, sx.q(j_4) * 0x38 + *(rcx_13 + 0x540), zmm3, arg3)
                rcx_13 = *(arg1 + 0x18)
                j_4 += 1
            while (j_4 s< *(rcx_13 + 0x548))
    
    i += 1
    r14_1 = &r14_1[1]
while (i s< *(r15 + 0xa8))
