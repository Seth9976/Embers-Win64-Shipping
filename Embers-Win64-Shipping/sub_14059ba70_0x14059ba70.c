// 函数: sub_14059ba70
// 地址: 0x14059ba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143de542c = 0
data_143ddb410 = 0
sub_1405a46b0(&data_143b4db28, arg1)
char arg_8

if (data_143ddb400 != 0)
    sub_140b0a030(&arg_8, /Script/Engine.StreamingSettings", s.FlushStreamingOnExit", 
        &data_143de5780)

if (data_143ddb400 == 0 || arg_8 != 0)
    sub_140bc7700(0xffffffff)
else
    sub_140bc3750()

if (sub_141f8cba0() == 0)
    sub_1423bd410()
    void*** rax_1 = sub_141f88540()
    void** rdx_1 = *rax_1
    rdx_1[4](rax_1, rdx_1, 0)

void* rbp = *(arg1 + 0x40)

if (rbp != 0)
    int64_t* rbx_1 = *(rbp + 8)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_4 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_4 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    j_sub_140a74f90(rbp)

int64_t* rcx_5 = *(arg1 + 0x48)
*(arg1 + 0x40) = 0

if (rcx_5 != 0)
    (*(*rcx_5 + 0x10))(rcx_5)
    void var_58
    
    if (arg1 + 0x48 != &var_58)
        *(arg1 + 0x48) = 0
        int64_t* rbx_2 = *(arg1 + 0x50)
        
        if (rbx_2 != 0)
            *(arg1 + 0x50) = 0
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp2_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)

void* rcx_8 = data_143f3d6c0

if (rcx_8 != 0)
    sub_141fedb00(rcx_8)
    int64_t* rcx_9 = data_143f3d6c0
    
    if (rcx_9 != 0)
        (**rcx_9)(rcx_9, 1)

int64_t* rcx_10 = data_143f5b298

if (rcx_10 != 0)
    (*(*rcx_10 + 0x298))(rcx_10)
    rcx_10 = data_143f5b298
    
    if (rcx_10 != 0)
        (*(*rcx_10 + 0x290))(rcx_10)

rcx_10.b = 1
sub_140e8b950(rcx_10.b)

if (Concurrency::details::x81cd8a40::_Is_vista_threadpool_supported::operator[]::_Is_vista_threadpool_supported()
        != 0)
    sub_142405320()

void arg_18
int64_t* rax_13 = sub_140b58170(&arg_18, "WorldBrowser", 1)
j_sub_140b3db50()
sub_140b4a6b0(&data_143de7d78, *rax_13, 1)
void arg_20
int64_t* rax_14 = sub_140b58170(&arg_20, "AssetRegistry", 1)
j_sub_140b3db50()
sub_140b4a6b0(&data_143de7d78, *rax_14, 1)
sub_140598df0()
sub_14227d920()
sub_1421f7090()
sub_1419b9b10()
sub_1419d88b0()
sub_1419d8830()
TEB* gsbase

if (data_143cd5b50 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd5b50)
    
    if (data_143cd5b50 == 0xffffffff)
        sub_140b58170(&data_143cd5b48, "HotReload", 1)
        _Init_thread_footer(&data_143cd5b50)

int64_t* rax_17 = sub_140b3dbe0(data_143cd5b48)

if (rax_17 != 0)
    int64_t rdx_5 = *rax_17
    (*(rdx_5 + 0x40))(rax_17, rdx_5)

j_sub_140b3db50()
sub_140b4a7a0(&data_143de7d78)
sub_141f9d710()

if (Concurrency::details::are_win7_sync_apis_available() != 0)
    int64_t* rax_19 = sub_140a242a0()
    int64_t r8_2 = *rax_19
    
    if ((*(r8_2 + 0x20))(rax_19, 0, r8_2) != 0)
        void var_48
        int64_t* rax_21 = sub_14059a440(&var_48, nullptr, 2)
        *(*rax_21 + 0x10) = 0
        void* rcx_20 = *rax_21
        int32_t r8_3 = rax_21[2].d
        int64_t* rdx_6 = rax_21[1]
        int64_t* rsi_2 = *(rcx_20 + 0x18)
        int64_t* arg_10 = rsi_2
        
        if (rsi_2 != 0)
            rsi_2[9].d += 1
        
        sub_1405a5db0(rcx_20, rdx_6, r8_3, 1)
        sub_1405a6220(sub_140a242a0(), &arg_10)
        
        if (rsi_2 != 0)
            rsi_2[9].d -= 1
            
            if (rsi_2[9].d == 1)
                sub_140a2f6e0(rsi_2)

sub_14197ee10()
sub_141d879a0()
return sub_140a32a20() __tailcall
