// 函数: sub_1411d51f0
// 地址: 0x1411d51f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
void* rdi = arg2
int32_t var_260
TEB* gsbase

if (data_143e7c088 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e7c088)
    
    if (data_143e7c088 == 0xffffffff)
        arg5 = sub_140b4c820(&var_260, u"FHairStrandsVertexFactory")
        data_143e7c080 = sub_1419cfe40(&var_260)
        _Init_thread_footer(&data_143e7c088)

uint64_t rdx = zx.q(*(arg1 + 0x10))
uint64_t* var_258 = nullptr
int64_t* r13 = rdi + 0x80
int64_t* rcx_2 = *r13
int64_t* rax_5 = (*(*rcx_2 + 0x40))(rcx_2, rdx, &var_258)
int32_t var_268
int64_t r12

if (*(arg1 + 0x10) != 3 || rax_5 == 0)
    r12.b = 0
else
    int64_t rdx_1 = *rax_5
    
    if ((*(rdx_1 + 0x158))(rax_5, rdx_1) == 0)
        r12.b = 0
    else
        int64_t r8_1 = *rax_5
        
        if ((*(*(r8_1 + 0x1e8))(rax_5, &var_268, r8_1) u>> 7 & 1) == 0)
            r12.b = 0
        else
            int32_t rax_9 = (*(*rax_5 + 0x1d8))(rax_5)
            int32_t rax_11
            
            if (rax_9 != 0)
                rax_11 = (*(*rax_5 + 0x1d8))(rax_5)
            
            if (rax_9 != 0 && rax_11 != 1)
                r12.b = 0
            else
                r12.b = 1

int64_t* rcx_8 = *(rdi + 0x78)
void* rbx = data_143e7c080
int64_t rcx_9 = *((*(*rcx_8 + 0x40))(rcx_8) + 0x20)
void* result

if (arg4 != 0)
    if (*(arg4 + 0x37) s>= 0)
        result.b = 0
    else
        result.b = 1
else if (*(rdi + 0x70) s> arg4.d)
    result.b = 1
else
    result.b = 0

if (r12.b != 0 && rcx_9 == *(rbx + 0x20) && result.b != 0)
    result = (*(*rax_5 + 0x20))(rax_5)
    
    if (result.d != 3)
        void var_158
        sub_140819f30(&var_158, rdi)
        int32_t r9 = *(rdi + 0x70)
        int32_t rax_14 = 0
        void* var_f0
        
        if (r9 != 0)
            do
                void* rdx_4 = &var_158
                int64_t r8_2 = sx.q(rax_14) * 0x68
                
                if (var_f0 != 0)
                    rdx_4 = var_f0
                
                *(rdx_4 + r8_2 + 0x40) = 0
                void* rdx_5 = &var_158
                
                if (var_f0 != 0)
                    rdx_5 = var_f0
                
                *(rdx_5 + r8_2 + 0x44) = 1
                void* rdx_6 = &var_158
                
                if (var_f0 != 0)
                    rdx_6 = var_f0
                
                *(rdx_6 + r8_2 + 0x48) = 1
                void* rdx_7 = &var_158
                
                if (var_f0 != 0)
                    rdx_7 = var_f0
                
                *(rdx_7 + r8_2 + 0x30) = 0
                void* rdx_8 = &var_158
                
                if (var_f0 != 0)
                    rdx_8 = var_f0
                
                rax_14 += 1
                *(rdx_8 + r8_2 + 0x38) = 0
            while (rax_14 u< r9)
        
        var_268 = 0
        var_260 = 0
        void* const rdx_9
        
        if (arg4 == 0)
            rdx_9 = nullptr
        else
            rdx_9 = *(arg4 + 0x110)
        
        void* rax_15 = *(rdi + 0x68)
        
        if (rax_15 != 0)
            rdi = rax_15
        
        int512_t zmm0_1 = sub_14126c0d0(arg1, rdx_9, rdi, &var_268, &var_260)
        uint32_t var_264_1
        
        if (arg4 == 0)
            var_264_1 = 0
        else
            var_264_1 = zx.d(*(arg4 + 0x3f))
        
        uint64_t* r12_1 = var_258
        
        if (r12_1 == 0)
            r12_1 = *r13
        
        int32_t rdi_1 = var_268
        int64_t* var_e0
        void* rax_18 = (*(*var_e0 + 0x40))(var_e0)
        char var_2b0_1 = 1
        int32_t* var_2b8_1
        var_2b8_1.d = 0
        void* var_1d8
        void** rax_19
        int512_t zmm0_2
        rax_19, zmm0_2 = sub_142127800(rax_5, &var_1d8, &data_143e77420, rax_18, zmm0_1)
        char var_2b0_2 = 1
        var_2b8_1.d = 0
        int64_t var_248_1 = rax_19[1]
        int128_t zmm7 = (*rax_19).o
        void** rax_20 = sub_142127800(rax_5, &var_1d8, &data_143e77520, rax_18, zmm0_2)
        void* rdx_12 = *(arg1 + 0x18)
        char var_2b0_3 = 0
        void* rcx_24 = *rax_20
        int64_t var_248_2 = rax_20[1]
        int64_t var_218 = *(arg1 + 0x28)
        int64_t var_210_1 = *(arg1 + 0x30)
        int32_t var_208_1 = *(arg1 + 0x38)
        int64_t var_200_1 = *(arg1 + 0x40)
        int64_t var_1f8_1 = *(arg1 + 0x48)
        int64_t var_1f0_1 = *(arg1 + 0x50)
        int64_t var_1e8_1 = *(arg1 + 0x58)
        int32_t var_1e0_1 = *(arg1 + 0x60)
        int32_t var_228_1 = arg7
        int32_t var_224_1 = arg8
        uint32_t var_21c_1 = var_264_1
        var_2b8_1.d = arg6
        int128_t var_238 = zx.o(0)
        int32_t var_220_1 = rdi_1
        sub_141458e70(&var_238, rdx_12, arg4, &var_158, var_2b8_1.d, var_2b0_3)
        int128_t var_1c8 = zmm7
        int64_t* var_278_1 = &var_238
        char var_280_1 = 0
        int64_t var_288_1 = 0
        int32_t var_290_1 = 2
        int128_t var_1b8
        __builtin_memset(&var_1b8, 0, 0x20)
        int128_t var_198_1 = rcx_24.o
        int128_t var_188
        __builtin_memset(&var_188, 0, 0x30)
        var_2b0_3.q = rax_5
        int512_t zmm6_1
        result, zmm6_1 = sub_1411b5680(arg1, &var_158, arg3, arg4, r12_1, var_2b0_3, &var_218, 
            &var_1c8, 2, var_290_1, var_288_1, var_280_1, var_278_1)
        zmm6_1.o = arg5
        
        if (var_f0 != 0)
            result = sub_140a74f90(var_f0)

__security_check_cookie(rax_1 ^ &var_2d8)
return result
