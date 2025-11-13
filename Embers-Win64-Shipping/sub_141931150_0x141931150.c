// 函数: sub_141931150
// 地址: 0x141931150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void* rbx = *(arg3 + 0xe8)
int64_t r12
r12.b = 0
sub_14193d1f0()

if (data_1439c77d0 != 0)
    int64_t rax_2 = sx.q(*(rbx + 0x650))
    
    if (rax_2.d == 0xffffffff)
        sub_14193a270(&data_1439c76c0, rbx + 0x450)
    else
        void* rax_3 = data_1439c7718
        void* r8 = *(data_1439c76c8 + rax_2 * 0x10)
        
        if (r8 == rax_3)
            int64_t rax_4 = *(rax_3 + 0x80)
            
            if (rax_4 != 0)
                data_1439c7718 = rax_4
        
        if (r8 != data_1439c7720)
            void* rcx_2 = *(r8 + 0x78)
            
            if (rcx_2 != 0)
                *(rcx_2 + 0x80) = *(r8 + 0x80)
            
            void* rcx_3 = *(r8 + 0x80)
            
            if (rcx_3 != 0)
                *(rcx_3 + 0x78) = *(r8 + 0x78)
            
            *(r8 + 0x78) = 0
            *(r8 + 0x80) = 0
            void* rax_7 = data_1439c7720
            *(r8 + 0x78) = rax_7
            
            if (rax_7 != 0)
                *(rax_7 + 0x80) = r8
            
            data_1439c7720 = r8
    
    if (*(rbx + 0x668) s>= 0)
        TEB* gsbase
        
        if (data_143eff8a8
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143eff8a8)
            
            if (data_143eff8a8 == 0xffffffff)
                sub_141929790(&data_143eff880)
                atexit(&data_142cee460)
                _Init_thread_footer(&data_143eff8a8)
        
        if (data_143eff638 != 0)
            sub_1409740e0(sx.q(*(rbx + 0x668)) * 0x58 + data_143eff880 + 8, rbx)
            *(rbx + 0x668) = 0xffffffff

void** result = *(arg3 + 0xe8)
int32_t rbx_1 = result[0xbd].d

if (*(arg2 + 0x198) != rbx_1)
    uint64_t rcx_8 = zx.q(rbx_1)
    int64_t r8_1
    
    if (data_143eff5c6 == 0)
        r8_1 = data_143effe60(rcx_8)
    else
        r8_1 = data_143f00478(rcx_8)
    
    *(arg2 + 0x198) = rbx_1
    result = sub_141940dd0(*(arg1 + 0x568), 1, r8_1)
    *(arg1 + 0x560) = 0
    r12.b = 1

if (data_143efed00 == 0)
    void* rdi_1 = *(arg3 + 0xe8)
    
    if (data_143eff5c6 != 0)
        int32_t i = 0
        int32_t rsi_1 = *(rdi_1 + 0x448)
        int64_t var_56 = 0
        int16_t var_58 = 0x6263
        
        if (*(rdi_1 + 0x433) u> 0)
            do
                int64_t* rcx_10 = &var_56
                char rdx_6 = (i s/ 0xa).b
                
                if (i s>= 0xa)
                    var_56.b = rdx_6 + 0x30
                    rcx_10 = &var_56:1
                
                *rcx_10 = i.b - rdx_6 * 0xa + 0x30
                *(rcx_10 + 1) = 0
                int32_t rax_18 = sub_14193d070(rsi_1, &var_58)
                
                if (rax_18 s>= 0)
                    sub_14193cec0(rsi_1, rax_18, i)
                
                i += 1
            while (i s< zx.d(*(rdi_1 + 0x433)))
    
    sub_141931d00(arg1, arg2, zx.d(*(arg3 + 0xb3)), arg1 + 0x7b0, 0, r12.b)
    result = sub_14194d9e0(arg1, arg2, *(arg3 + 0xe8) + 0x640)

__security_check_cookie(rax_1 ^ &var_88)
return result
