// 函数: sub_141c26d10
// 地址: 0x141c26d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = data_1439a4b70
int32_t rax
int128_t zmm6
rax, zmm6 = sub_140cdd5d0(arg1, &var_38)

if (rax s< 0x1c)
    var_38 = data_1439a9558
    int32_t rax_1
    int512_t zmm6_1
    rax_1, zmm6_1 = sub_140cdd5d0(arg1, &var_38)
    
    if (rax_1 != 1)
    label_141c26e5e:
        int32_t rax_6 = arg1[0xf7].d
        *(arg1 + 0x7bc) = arg1[0xf6]
        *(arg1 + 0x7c4) = rax_6
    else
        void* rax_2
        rax_2, zmm6_1 = sub_140d209c0(arg1)
        
        if (rax_2 == 0)
            goto label_141c26e5e
        
        void* rax_3 = sub_141c27b40()
        void* rcx_2 = *(rax_2 + 0x10)
        int64_t rdx_2 = sx.q(*(rax_3 + 0x38))
        
        if (rdx_2.d s> *(rcx_2 + 0x38) || *(*(rcx_2 + 0x30) + (rdx_2 << 3)) != rax_3 + 0x30)
            goto label_141c26e5e
        
        int64_t* rax_5 = sub_141c26790()
        int64_t rsi_1 = 0
        int64_t* r15_1 = rax_5
        int64_t r14_1 = sx.q(rax_5[1].d)
        
        if (r14_1 s<= 0)
            goto label_141c26e5e
        
        zmm6_1.o = 0x3faa3d71
        int64_t* rdi_1 = nullptr
        
        while (true)
            int64_t rcx_4 = *r15_1
            
            if (arg1[0xf6].d.d f!= *(rdi_1 + rcx_4 + 0x10)
                    || (*(arg1 + 0x7b4)).d f!= *(rdi_1 + rcx_4 + 0x14))
                rax_5.b = 0
            else
                rax_5.b = 1
            
            if (rax_5.b != 0 && not(1.33000004f f!= arg1[0xf7].d))
                int16_t* rdx_3
                
                if (*(rax_2 + 0x878) == 0)
                    rdx_3 = &data_142d40450
                else
                    rdx_3 = *(rax_2 + 0x870)
                
                int16_t* const rcx_5
                
                if (*(rdi_1 + rcx_4 + 8) == 0)
                    rcx_5 = &data_142d40450
                else
                    rcx_5 = *(rdi_1 + rcx_4)
                
                if (sub_140a54510(rcx_5, rdx_3).d == 0)
                    break
            
            rsi_1 += 1
            rdi_1 = &rdi_1[4]
            
            if (rsi_1 s>= r14_1)
                goto label_141c26e5e
    
    zmm6_1.o = zmm6

if (arg1[0xfc].b u>= 4)
    arg1[0xfc].b = 0

sub_141c26ec0(arg1)
arg1[0x109].b |= 1
return sub_141eefdd0(arg1) __tailcall
