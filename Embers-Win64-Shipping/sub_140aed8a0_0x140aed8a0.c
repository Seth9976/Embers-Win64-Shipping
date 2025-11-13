// 函数: sub_140aed8a0
// 地址: 0x140aed8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0

if (arg1 == 0)
    return 0

int32_t arg_8
sub_140a452d0(arg1, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rbp_1

if (rax.d == 0xffffffff)
    rbp_1 = nullptr
else
    rbp_1 = rax * 0xb8 + *arg1

int64_t* r15 = rbp_1 + 0x10

if (rbp_1 == 0)
    r15 = nullptr

if (r15 != 0)
    int32_t i_5 = -1
    int64_t rdi_1 = *arg3
    int32_t i_2 = 0xffffffff
    int32_t var_44_1 = 0xffffffff
    sub_140a6d3f0(r15, r15[1].d - *(r15 + 0x34), 0)
    
    if (r15[9].d != 0)
        void* r9 = rbp_1 + 0x48
        int32_t r8_2 = sub_140b5ead0(rdi_1.d) + rdi_1:4.d
        
        if (rbp_1 == 0)
            r9 = 0x38
        
        int32_t* rax_2 = rbp_1 + 0x58
        
        if (rbp_1 == 0)
            rax_2 = 0x48
        
        void* rdx_3 = *(r9 + 8)
        
        if (rdx_3 != 0)
            r9 = rdx_3
        
        i_5 = *(r9 + (((sx.q(*rax_2) - 1) & sx.q(r8_2)) << 2))
        int32_t i_6 = i_5
        i_2 = i_5
        
        if (i_5 != 0xffffffff)
            int64_t rdx_4 = *r15
            i_2 = i_5
            int32_t i
            
            do
                int64_t rcx_6 = sx.q(i_5) * 6
                i = *(rdx_4 + (rcx_6 << 3) + 0x28)
                int32_t i_3 = i
                
                if (*(rdx_4 + (rcx_6 << 3)) == rdi_1)
                    break
                
                i_2 = i
                i_5 = i
            while (i != 0xffffffff)
    
    int64_t zmm1_1 = i_2.q
    int128_t zmm0_1 = r15.o
    
    if (i_5 != 0xffffffff)
        int64_t* r15_1 = zmm0_1.q
        int32_t i_1 = zmm1_1:4.d
        int32_t i_4 = zmm1_1.d
        int128_t zmm6
        int128_t var_28_1 = zmm6
        
        while (rsi.b == 0)
            void* rdi_4 = sx.q(i_4) * 0x30 + *r15_1
            int16_t* rdx_5
            
            if (arg4[1].d == 0)
                rdx_5 = &data_142d40450
            else
                rdx_5 = *arg4
            
            int16_t* const rcx_7
            
            if (*(rdi_4 + 0x10) == 0)
                rcx_7 = &data_142d40450
            else
                rcx_7 = *(rdi_4 + 8)
            
            int32_t rax_6 = sub_140a54510(rcx_7, rdx_5)
            rsi.b = rax_6 == 0
            
            if (rax_6 != 0 && sub_140b1dd90(rdi_4 + 8) != 0 && sub_140b1dd90(arg4) != 0)
                wchar16* _String
                
                if (*(rdi_4 + 0x10) == 0)
                    _String = &data_142d40450
                else
                    _String = *(rdi_4 + 8)
                
                _wtof(_String)
                zmm6.d = fconvert.s(zmm0_1.q)
                wchar16* _String_1
                
                if (arg4[1].d == 0)
                    _String_1 = &data_142d40450
                else
                    _String_1 = *arg4
                
                _wtof(_String_1)
                zmm1_1.d = fconvert.s(zmm0_1.q)
                
                if (zmm6.d f!= zmm1_1.d)
                    rsi.b = 0
                else
                    rsi.b = 1
            
            i_4 = i_1
            
            if (i_1 == 0xffffffff)
                break
            
            int64_t r8_3 = *r15_1
            
            do
                int64_t rcx_11 = sx.q(i_4) * 6
                i_1 = *(r8_3 + (rcx_11 << 3) + 0x28)
                
                if (*(r8_3 + (rcx_11 << 3)) == zmm0_1:8.q)
                    break
                
                i_4 = i_1
            while (i_1 != 0xffffffff)
            
            if (i_4 == 0xffffffff)
                break
        
        return zx.q(rsi.b)

return 0
