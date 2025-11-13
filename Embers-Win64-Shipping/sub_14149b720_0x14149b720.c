// 函数: sub_14149b720
// 地址: 0x14149b720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi
uint64_t var_8 = rsi
int32_t i = 0
int64_t rax
int128_t zmm6

if (*(arg1 + 0x40) s> 0)
    int64_t rdx_1 = *(arg1 + 0x38)
    int64_t* rbx_1 = nullptr
    int64_t* r15_1 = nullptr
    
    do
        rsi = nullptr
        void* r12_1 = *(r15_1 + **(arg1 + 0x20))
        
        if (*(rbx_1 + rdx_1 + 8) s> 0)
            void** rdi_1 = nullptr
            
            do
                char var_48_1 = 0
                rax, zmm6 = sub_141479710(r12_1, *(rdi_1 + *(rbx_1 + rdx_1)), *(arg1 + 8), 
                    (*(arg1 + 0x30)).b)
                rdx_1 = *(arg1 + 0x38)
                rdi_1 = &rdi_1[1]
                rsi = zx.q(rsi.d + 1)
            while (rsi.d s< *(rbx_1 + rdx_1 + 8))
        
        i += 1
        r15_1 = &r15_1[1]
        rbx_1 = &rbx_1[2]
    while (i s< *(arg1 + 0x40))

int32_t i_1 = 0

if (*(arg1 + 0x50) s<= 0)
    return 

uint64_t r8_2 = zx.q(data_14401b1a0)
int64_t r15_2 = 0
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
void** rdx_4 = nullptr
int128_t var_38_1 = zmm6
zmm6 = 0x3727c5ac
void** arg_8 = nullptr

do
    rsi.b = 0
    void* r13_1 = *(rdx_4 + **(arg1 + 0x28))
    
    if (*(arg1 + 0x30) s< 3)
        int64_t rdi_2 = *(ThreadLocalStoragePointer + (r8_2 << 3))
        
        if (data_143ee1cb8 s> *(0x14 + rdi_2))
            _Init_thread_header(&data_143ee1cb8)
            
            if (data_143ee1cb8 == 0xffffffff)
                int64_t* rcx_9 = data_143db18d0
                
                if (rcx_9 == 0)
                    sub_140a53c40()
                    rcx_9 = data_143db18d0
                
                int64_t r8_3
                r8_3.b = 1
                int64_t* rax_15 =
                    (*(*rcx_9 + 0xb0))(rcx_9, r.Mobile.EnableStaticAndCSMShadowReceivers", r8_3)
                
                if (rax_15 != 0)
                    int64_t rdx_7 = *rax_15
                    rax_15 = (*(rdx_7 + 0x58))(rax_15, rdx_7)
                
                data_143ee1cb0 = rax_15
                _Init_thread_footer(&data_143ee1cb8)
        
        if (data_143ee1cc8 s> *(0x14 + rdi_2))
            _Init_thread_header(&data_143ee1cc8)
            
            if (data_143ee1cc8 == 0xffffffff)
                int64_t* rcx_11 = data_143db18d0
                
                if (rcx_11 == 0)
                    sub_140a53c40()
                    rcx_11 = data_143db18d0
                
                int64_t r8_4
                r8_4.b = 1
                int64_t* rax_17 =
                    (*(*rcx_11 + 0xb0))(rcx_11, r.Mobile.EnableMovableLightCSMShaderCulling", r8_4)
                
                if (rax_17 != 0)
                    int64_t rdx_8 = *rax_17
                    rax_17 = (*(rdx_8 + 0x58))(rax_17, rdx_8)
                
                data_143ee1cc0 = rax_17
                _Init_thread_footer(&data_143ee1cc8)
        
        if (data_143ee1cd8 s> *(0x14 + rdi_2))
            _Init_thread_header(&data_143ee1cd8)
            
            if (data_143ee1cd8 == 0xffffffff)
                int64_t* rcx_13 = data_143db18d0
                
                if (rcx_13 == 0)
                    sub_140a53c40()
                    rcx_13 = data_143db18d0
                
                int64_t r8_5
                r8_5.b = 1
                int64_t* rax_19 =
                    (*(*rcx_13 + 0xb0))(rcx_13, r.Mobile.Shadow.CSMShaderCullingMethod", r8_5)
                
                if (rax_19 != 0)
                    int64_t rdx_9 = *rax_19
                    rax_19 = (*(rdx_9 + 0x58))(rax_19, rdx_9)
                
                data_143ee1cd0 = rax_19
                _Init_thread_footer(&data_143ee1cd8)
        
        if ((*(data_143ee1cd0 + 4) & 0xf) - 2 u> 1)
            rsi.b = 0
        else if (*(data_143ee1cc0 + 4) == 0)
        label_14149b918:
            
            if (*(data_143ee1cb0 + 4) == 0)
                rsi.b = 0
            else
                int64_t* rcx_4 = *(*(r13_1 + 0x5c0) + 0x20)
                
                if ((*(*rcx_4 + 0x98))(rcx_4).b == 0)
                    rsi.b = 0
                else
                    rsi.b = 1
        else
            rsi = *(r13_1 + 0x5c0)
            void* rax_8 = *(rsi + 0x20)
            uint64_t rcx_3 = zx.q(*(rax_8 + 0x138))
            
            if ((rcx_3.b & 2) == 0)
                goto label_14149b918
            
            float zmm0 = *(rax_8 + 0x30)
            
            if (zmm0 * zmm0 f>= zmm6.d)
            label_14149b8ae:
                char rax_9
                
                if ((rcx_3.b & 4) != 0)
                    rax_9 = sub_14122cc00(rsi)
                
                if ((rcx_3.b & 4) == 0 || rax_9 == 0)
                    i.b = 1
                else
                    i.b = 0
            else
                zmm0 = *(rax_8 + 0x34)
                
                if (zmm0 * zmm0 f>= zmm6.d)
                    goto label_14149b8ae
                
                zmm0 = *(rax_8 + 0x38)
                
                if (not(zmm0 * zmm0 f< zmm6.d))
                    goto label_14149b8ae
                
                i.b = 0
            
            char rdi_3 = *(*(rsi + 0x20) + 0x138)
            char rbx_2
            
            if ((rdi_3 & 8) == 0)
                rcx_3.b = 0
                rbx_2 = rdi_3 & 0x10
            else
                rbx_2 = rdi_3 & 0x10
                
                if (rbx_2 == 0)
                    rcx_3.b = 0
                    rbx_2 = rdi_3 & 0x10
                else if (sub_14122cc00(rsi) != 0)
                    rcx_3.b = 0
                    rbx_2 = rdi_3 & 0x10
                else
                    rcx_3.b = 1
            
            if (i.b == 0 || rbx_2 == 0 || ((*(*(rsi + 0x20) + 0x138) & 4) != 0 && rcx_3.b == 0))
                goto label_14149b918
            
            rsi.b = 1
        
        rdx_4 = arg_8
    
    int32_t j = 0
    int64_t* rcx_6 = *(arg1 + 0x48) + r15_2
    
    if (rcx_6[1].d s> 0)
        int64_t rbx_3 = 0
        
        do
            char var_48_2 = rsi.b
            rax, zmm6 = sub_141479710(r13_1, *(*rcx_6 + rbx_3), nullptr, (*(arg1 + 0x30)).b)
            rbx_3 += 8
            rcx_6 = *(arg1 + 0x48) + r15_2
            j += 1
        while (j s< rcx_6[1].d)
        
        rdx_4 = arg_8
    
    r8_2 = zx.q(data_14401b1a0)
    rdx_4 = &rdx_4[1]
    ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    i_1 += 1
    r15_2 += 0x10
    arg_8 = rdx_4
while (i_1 s< *(arg1 + 0x50))
