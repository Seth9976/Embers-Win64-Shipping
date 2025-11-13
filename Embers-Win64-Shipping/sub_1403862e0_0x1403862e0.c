// 函数: sub_1403862e0
// 地址: 0x1403862e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int32_t var_68
int64_t rax_1 = __security_cookie ^ &var_68
var_68 = arg3
char* var_50 = arg2
int32_t rsi = 0
int32_t var_64
opus_multistream_decoder_ctl(arg1, 0xfbd, &var_64, arg4)
uint32_t result_1 = arg6
uint32_t result_2 = var_64 s/ 0x19 * 3

if (result_1 s>= result_2)
    result_1 = result_2

int64_t rcx_1 = sx.q(result_1 * 2) << 2
int64_t rax_5 = rcx_1 + 0xf

if (rax_5 u<= rcx_1)
    rax_5 = 0xffffffffffffff0

int64_t rax_6 = rax_5 & 0xfffffffffffffff0
__chkstk(rax_6)
void var_b8
void* rsp_1 = &var_b8 - rax_6
void* r12 = rsp_1 + 0x50
void* var_48 = &arg1[0x44]
void* var_40 = r12
int32_t rax_8 = opus_decoder_get_size(2)
int32_t rax_9 = opus_decoder_get_size(1)
int32_t r11 = var_68
int32_t var_5c = rax_9
uint32_t result

if (r11 == 0)
    rsi = r11 + 1
label_140386410:
    int32_t rcx_3 = arg1[1]
    int64_t r8_2 = sx.q(rsi)
    int32_t rdi_1 = 0
    int64_t var_38_1 = r8_2
    
    if (rcx_3 s> 0)
        while (true)
            void* r10_1 = var_48
            
            if (rdi_1 s< arg1[2])
                rax_9 = rax_8
            
            var_48 += sx.q((rax_9 + 7) & 0xfffffff8)
            
            if (r8_2 == 0 && r11 s<= 0)
                result = -3
                goto label_140386615
            
            *(rsp_1 + 0x40) = arg8
            int32_t rdx_6
            rdx_6.b = rdi_1 != rcx_3 - 1
            int32_t var_60
            *(rsp_1 + 0x38) = &var_60
            *(rsp_1 + 0x30) = rdx_6
            *(rsp_1 + 0x28) = arg7
            var_60 = 0
            *(rsp_1 + 0x20) = result_1
            int512_t zmm0
            int512_t zmm1
            int512_t zmm2
            int512_t zmm3
            result, zmm0, zmm1, zmm2, zmm3 = sub_14037f5a0(r10_1, var_50, zx.q(r11), r12)
            int64_t rcx_5 = sx.q(var_60)
            var_68 -= rcx_5.d
            result_1 = result
            var_50 = &var_50[rcx_5]
            
            if (result s<= 0)
                goto label_140386615
            
            if (rdi_1 s>= arg1[2])
                int32_t i_9 = sub_14038aca0(arg1, rdi_1, 0xffffffff)
                int32_t i_6 = i_9
                
                if (i_9 != 0xffffffff)
                    int32_t i
                    
                    do
                        *arg1
                        *(rsp_1 + 0x28) = result_1
                        *(rsp_1 + 0x20) = 1
                        arg5(nop)
                        i = sub_14038aca0(arg1, rdi_1, i_6)
                        i_6 = i
                    while (i != 0xffffffff)
            else
                int32_t i_7 = sub_14038ac60(arg1, rdi_1, 0xffffffff)
                int32_t i_4 = i_7
                
                if (i_7 != 0xffffffff)
                    int32_t i_1
                    
                    do
                        *arg1
                        *(rsp_1 + 0x28) = result_1
                        *(rsp_1 + 0x20) = 2
                        arg5(nop)
                        i_1 = sub_14038ac60(arg1, rdi_1, i_4)
                        i_4 = i_1
                    while (i_1 != 0xffffffff)
                
                int32_t i_8 = sub_14038ace0(arg1, rdi_1, 0xffffffff)
                int32_t i_5 = i_8
                
                if (i_8 != 0xffffffff)
                    int32_t i_2
                    
                    do
                        *arg1
                        *(rsp_1 + 0x28) = result_1
                        *(rsp_1 + 0x20) = 2
                        arg5(nop)
                        i_2 = sub_14038ace0(arg1, rdi_1, i_5)
                        i_5 = i_2
                    while (i_2 != 0xffffffff)
                    r12 = var_40
            
            rcx_3 = arg1[1]
            rdi_1 += 1
            
            if (rdi_1 s>= rcx_3)
                break
            
            r11 = var_68
            r8_2 = var_38_1
            rax_9 = var_5c
    
    int32_t i_3 = 0
    
    if (*arg1 s> 0)
        void* rsi_3 = &arg1[3]
        
        do
            if (*rsi_3 == 0xff)
                *(rsp_1 + 0x28) = result_1
                *(rsp_1 + 0x20) = 0
                arg5(nop)
            
            i_3 += 1
            rsi_3 += 1
        while (i_3 s< *arg1)
    
    result = result_1
else if (r11 s>= 0)
    uint64_t r8_1 = zx.q(arg1[1])
    
    if (r11 s>= ((r8_1 << 1) + -ffffffffffffffff).d)
        result = PortablePDB::MapPortablePDB(arg2, r11, r8_1.d, var_64)
        
        if (result s>= 0)
            if (result s<= result_1)
                r11 = var_68
                rax_9 = var_5c
                goto label_140386410
            
            result = -2
    else
        result = -4
else
    result = -1

label_140386615:
__security_check_cookie(rax_1 ^ &var_68)
return result
