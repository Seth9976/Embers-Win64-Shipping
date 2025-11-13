// 函数: sub_141e4b710
// 地址: 0x141e4b710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x28)
int128_t zmm6 = *(result + 0x820)

if (*(result + 0x825) == 0)
    zmm6 = zx.o(0)

void* rdi = *(result + 0x730)

if (rdi != 0)
    void* rax = sub_142475840()
    void* rdx_1 = *(rdi + 0x10)
    int64_t rax_1 = sx.q(*(rax + 0x38))
    void arg_8
    
    if (rax_1.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_1 << 3)) == rax + 0x30)
        int64_t* rax_3 = sub_141df60d0(*(arg1 + 0x28), 0xffffffff, &arg_8)
        void* rcx_2 = *(arg1 + 0x28)
        return sub_141e066f0(rcx_2, rax_3, rdi, rcx_2 + 0x768, rcx_2 + 0x778, rcx_2 + 0x788, 
            *(rcx_2 + 0x824), zmm6.d, 0x3f800000, rcx_2 + 0x80c, rcx_2 + 0x810)
    
    result = *(arg1 + 0x28)
    void* rdi_1 = *(result + 0x730)
    
    if (rdi_1 == 0)
        goto label_141e4b837
    
    void* rax_4 = sub_1424696d0()
    void* rdx_5 = *(rdi_1 + 0x10)
    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_5.d s> *(rdx_5 + 0x38) || *(*(rdx_5 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
        result = *(arg1 + 0x28)
    label_141e4b837:
        rdi_1 = *(result + 0x730)
        
        if (rdi_1 == 0)
            goto label_141e4b86a
        
        void* rax_7 = sub_14246e590()
        void* rdx_6 = *(rdi_1 + 0x10)
        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rax_8.d s<= *(rdx_6 + 0x38) && *(*(rdx_6 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
            goto label_141e4b8b6
        
        result = *(arg1 + 0x28)
    label_141e4b86a:
        rdi_1 = *(result + 0x730)
        
        if (rdi_1 == 0)
            goto label_141e4b953
        
        void* rax_10 = sub_14245c1f0()
        void* rdx_7 = *(rdi_1 + 0x10)
        int64_t rax_11 = sx.q(*(rax_10 + 0x38))
        
        if (rax_11.d s<= *(rdx_7 + 0x38) && *(*(rdx_7 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30)
            goto label_141e4b8b6
        
        result = *(arg1 + 0x28)
    label_141e4b953:
        void* rdi_2 = *(result + 0x730)
        
        if (rdi_2 == 0)
            goto label_141e4b9d3
        
        void* rax_14 = sub_1424641d0()
        void* rdx_10 = *(rdi_2 + 0x10)
        int64_t rax_15 = sx.q(*(rax_14 + 0x38))
        
        if (rax_15.d s> *(rdx_10 + 0x38) || *(*(rdx_10 + 0x30) + (rax_15 << 3)) != rax_14 + 0x30)
            result = *(arg1 + 0x28)
        label_141e4b9d3:
            void* rdi_3 = *(result + 0x730)
            
            if (rdi_3 != 0)
                void* rax_17 = sub_142573be0()
                void* rdx_12 = *(rdi_3 + 0x10)
                result = sx.q(*(rax_17 + 0x38))
                
                if (result.d s<= *(rdx_12 + 0x38))
                    uint64_t result_1 = result
                    result = *(rdx_12 + 0x30)
                    
                    if (*(result + (result_1 << 3)) == rax_17 + 0x30)
                        result = sub_141df60d0(*(arg1 + 0x28), 0xffffffff, &arg_8)
                        sub_141e06750(*(arg1 + 0x28), result, rdi_3, 0x3f800000)
        else
            if (*(rdi_2 + 0x160) s> 0)
                int512_t zmm2
                zmm2.o = 0x3f800000
                sub_141e4b6a0(*(arg1 + 0x28), *(arg1 + 0x20))
            
            result = sub_141df8380(*(arg1 + 0x28))
            void* rcx_11 = *(arg1 + 0x28)
            
            if (result != 0)
                result = zx.q(*(result + 0x10))
                *(rcx_11 + 0x80c) = result.d
            else if (*(rcx_11 + 0x825) != 0)
                *(rcx_11 + 0x825) = 0
    else
    label_141e4b8b6:
        int64_t* rax_13 = sub_141df60d0(*(arg1 + 0x28), 0xffffffff, &arg_8)
        void* rcx_7 = *(arg1 + 0x28)
        int32_t var_50
        var_50.q = rcx_7 + 0x810
        char var_58
        var_58.q = rcx_7 + 0x80c
        sub_141e06760(rcx_7, rax_13, rdi_1, *(rcx_7 + 0x824), zmm6.d, 0x3f800000, var_58, var_50)
        result = *(arg1 + 0x28)
        
        if (*(result + 0x824) == 0)
            zmm6.d = zmm6.d f* *(rdi_1 + 0x94)
            zmm6.d f- 0f
            bool cond:1_1 = zmm6.d f<= 0f
            
            if (zmm6.d f>= 0f)
                goto label_141e4b928
            
            if (0f f>= *(result + 0x80c))
                *(result + 0x825) = 0
            else
                cond:1_1 = zmm6.d f<= 0f
            label_141e4b928:
                
                if (not(cond:1_1) && not(*(rdi_1 + 0x90) f> *(result + 0x80c)))
                    *(result + 0x825) = 0

return result
