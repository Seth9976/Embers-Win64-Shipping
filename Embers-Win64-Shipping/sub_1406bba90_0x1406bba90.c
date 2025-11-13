// 函数: sub_1406bba90
// 地址: 0x1406bba90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = arg3
int64_t* result = arg1
int64_t* var_38 = arg1
int32_t var_50 = 0
*arg1 = 0
arg1[1] = 0
int32_t var_50_1 = 1
int64_t* r13 = nullptr
int64_t* var_80 = nullptr
int32_t r14 = 0
int64_t var_78 = 0
int32_t rsi = 0
int64_t var_48 = 0
void* i_4 = av_codec_iterate(&var_48)
void* i_3 = i_4

if (i_4 != 0)
    void* i
    
    do
        if (*(i_3 + 0x14) == arg2 && av_codec_is_decoder(i_3) != 0)
            int64_t rdi_1 = sx.q(r14)
            r14 = (rdi_1 + 1).d
            var_78.d = r14
            
            if (r14 s> rsi)
                sub_140638870(&var_80)
                rsi = var_78:4.d
                r14 = var_78.d
                r13 = var_80
            
            r13[rdi_1] = i_3
        
        i = av_codec_iterate(&var_48)
        i_3 = i
    while (i != 0)
    rdi = arg3

if (rdi != 0)
    int64_t* var_70 = nullptr
    int32_t rdi_2 = 0
    int64_t var_68_1 = 0
    char var_87 = 0
    sub_1406b43e0(r13, r14, var_87, &var_87)
    rsi = 0
    
    if (r14 s> 0)
        int32_t r13_1 = 1
        int64_t* r12_1 = nullptr
        int32_t r15 = 0
        
        do
            char* rdi_3 = **(r12_1 + var_80)
            int64_t var_60 = 0
            int32_t rdx_2 = 0
            int64_t var_58_1 = 0
            int32_t rcx_5 = 0
            
            if (rdi_3 != 0 && *rdi_3 != 0)
                int64_t rbx = -1
                
                do
                    rbx += 1
                while (rdi_3[rbx] != 0)
                
                if (rbx.d + 1 s> 0)
                    sub_1405947f0(&var_60, rbx.d + 1)
                    rcx_5 = var_58_1:4.d
                    rdx_2 = var_58_1.d
                
                int32_t rax_3 = rdx_2 + rbx.d + 1
                var_58_1.d = rax_3
                
                if (rax_3 s> rcx_5)
                    sub_140594770(&var_60)
                
                sub_1405a7220(var_60, rbx.d + 1, rdi_3, rbx.d + 1, 0x3f)
            
            int32_t rax_4 = sub_140a23cf0(&var_60, u"cuda", 1, 0, 0xffffffff)
            int32_t rax_5
            
            if (rax_4 == 0xffffffff)
                rax_5 = sub_140a23cf0(&var_60, u"cuvid", rax_4 + 2, 0, rax_4)
            
            if (rax_4 != 0xffffffff || rax_5 != 0xffffffff)
                int64_t rbx_2 = sx.q(r15)
                r15 = (rbx_2 + 1).d
                var_68_1.d = r15
                
                if (r15 s> var_68_1:4.d)
                    sub_140638870(&var_70)
                    r15 = var_68_1.d
                
                int64_t* r9_3 = var_80
                var_70[rbx_2] = *(r12_1 + r9_3)
                int32_t r8_4 = r14 - rsi
                
                if (r8_4 != 1)
                    memmove(&r9_3[sx.q(rsi)], &r9_3[sx.q(r13_1)], (r8_4 - 1) << 3)
                
                var_78.d = r14 - 1
                sub_1406bfd50(&var_80)
                rsi -= 1
                r13_1 -= 1
                r12_1 -= 8
                r14 = var_78.d
            
            int64_t rcx_14 = var_60
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            rsi += 1
            r13_1 += 1
            r12_1 = &r12_1[1]
        while (rsi s< r14)
        
        result = arg1
        rdi_2 = r15
        r13 = var_80
    
    int32_t rbx_3 = rdi_2 + r14
    var_68_1.d = rbx_3
    
    if (rbx_3 s> var_68_1:4.d)
        sub_140638870(&var_70)
        rbx_3 = var_68_1.d
    
    int64_t* rdi_4 = var_70
    memcpy(&rdi_4[sx.q(rdi_2)], r13, r14 << 3)
    void* r13_2 = &rdi_4[sx.q(rbx_3)]
    int64_t* r12_2 = rdi_4
    
    if (rdi_4 != r13_2)
        do
            int64_t rdi_5 = *r12_2
            
            if (avcodec_get_hw_config(rdi_5, 0) != 0)
                rsi.b = 0
                int32_t rbx_4 = 0
                void* i_1 = avcodec_get_hw_config(rdi_5, 0)
                
                if (i_1 != 0)
                    do
                        if ((*(i_1 + 4) & 1) != 0)
                            av_hwdevice_get_type_name(zx.q(*(i_1 + 8)))
                            rsi.b = 1
                        
                        rbx_4 += 1
                        i_1 = avcodec_get_hw_config(rdi_5, zx.q(rbx_4))
                    while (i_1 != 0)
                    
                    if (rsi.b != 0)
                        int64_t rbx_5 = sx.q(result[1].d)
                        int32_t rax_12 = (rbx_5 + 1).d
                        result[1].d = rax_12
                        
                        if (rax_12 s> *(result + 0xc))
                            sub_140638870(result)
                        
                        *(*result + (rbx_5 << 3)) = rdi_5
            
            r12_2 = &r12_2[1]
        while (r12_2 != r13_2)
        
        rdi_4 = var_70
    
    if (rdi_4 != 0)
        sub_140a74f90(rdi_4)
    
    r13 = var_80
    rdi = arg3

if (r14 s> 0 && rdi == 0)
    void* r12_4 = &r13[sx.q(r14)]
    int64_t* r14_2 = r13
    
    if (r13 != r12_4)
        do
            int64_t rdi_6 = *r14_2
            
            if (avcodec_get_hw_config(rdi_6, 0) == 0)
            label_1406bbe5d:
                int64_t rbx_7 = sx.q(result[1].d)
                int32_t rax_16 = (rbx_7 + 1).d
                result[1].d = rax_16
                
                if (rax_16 s> *(result + 0xc))
                    sub_140638870(result)
                
                *(*result + (rbx_7 << 3)) = rdi_6
            else
                rsi.b = 0
                int32_t rbx_6 = 0
                void* i_2 = avcodec_get_hw_config(rdi_6, 0)
                
                if (i_2 == 0)
                    goto label_1406bbe5d
                
                do
                    if ((*(i_2 + 4) & 1) != 0)
                        av_hwdevice_get_type_name(zx.q(*(i_2 + 8)))
                        rsi.b = 1
                    
                    rbx_6 += 1
                    i_2 = avcodec_get_hw_config(rdi_6, zx.q(rbx_6))
                while (i_2 != 0)
                
                if (rsi.b == 0)
                    goto label_1406bbe5d
            
            r14_2 = &r14_2[1]
        while (r14_2 != r12_4)

if (r13 != 0)
    sub_140a74f90(r13)

return result
